// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "CustomNoise.h"



#pragma region CustomNoise

float CustomNoise::grad(int hash, float x, float y, float z) {
    int h = hash & 15;     // Convert low 4 bits of hash code into 12 simple
    float u = h < 8 ? x : y; // gradient directions, and compute dot product.
    float v = h < 4 ? y : h == 12 || h == 14 ? x : z; // Fix repeats at h = 12 to 15
    return ((h & 1) ? -u : u) + ((h & 2) ? -v : v);
}

double CustomNoise::grad(int hash, double x, double y, double z) {
    int h = hash & 15;     // Convert low 4 bits of hash code into 12 simple
    double u = h < 8 ? x : y; // gradient directions, and compute dot product.
    double v = h < 4 ? y : h == 12 || h == 14 ? x : z; // Fix repeats at h = 12 to 15
    return ((h & 1) ? -u : u) + ((h & 2) ? -v : v);
}

uint8 CustomNoise::PermutationHash(int i) {
    return perm[static_cast<uint8>(i)];
}


FVector CustomNoise::RandomFVector(int hash)
{
    return FVector(PermutationHash(PermutationHash(hash)), PermutationHash(PermutationHash(hash + 2)), PermutationHash(PermutationHash(hash + 4)));

}
DVector CustomNoise::RandomDVector(int hash)
{
    return DVector(PermutationHash(PermutationHash(hash)), PermutationHash(PermutationHash(hash + 2)), PermutationHash(PermutationHash(hash + 4)));

}


const float RandomVect3D[] =
{
    -0.7292736885f, -0.6618439697f, 0.1735581948f, 0, 0.790292081f, -0.5480887466f, -0.2739291014f, 0, 0.7217578935f, 0.6226212466f, -0.3023380997f, 0, 0.565683137f, -0.8208298145f, -0.0790000257f, 0, 0.760049034f, -0.5555979497f, -0.3370999617f, 0, 0.3713945616f, 0.5011264475f, 0.7816254623f, 0, -0.1277062463f, -0.4254438999f, -0.8959289049f, 0, -0.2881560924f, -0.5815838982f, 0.7607405838f, 0,
    0.5849561111f, -0.662820239f, -0.4674352136f, 0, 0.3307171178f, 0.0391653737f, 0.94291689f, 0, 0.8712121778f, -0.4113374369f, -0.2679381538f, 0, 0.580981015f, 0.7021915846f, 0.4115677815f, 0, 0.503756873f, 0.6330056931f, -0.5878203852f, 0, 0.4493712205f, 0.601390195f, 0.6606022552f, 0, -0.6878403724f, 0.09018890807f, -0.7202371714f, 0, -0.5958956522f, -0.6469350577f, 0.475797649f, 0,
    -0.5127052122f, 0.1946921978f, -0.8361987284f, 0, -0.9911507142f, -0.05410276466f, -0.1212153153f, 0, -0.2149721042f, 0.9720882117f, -0.09397607749f, 0, -0.7518650936f, -0.5428057603f, 0.3742469607f, 0, 0.5237068895f, 0.8516377189f, -0.02107817834f, 0, 0.6333504779f, 0.1926167129f, -0.7495104896f, 0, -0.06788241606f, 0.3998305789f, 0.9140719259f, 0, -0.5538628599f, -0.4729896695f, -0.6852128902f, 0,
    -0.7261455366f, -0.5911990757f, 0.3509933228f, 0, -0.9229274737f, -0.1782808786f, 0.3412049336f, 0, -0.6968815002f, 0.6511274338f, 0.3006480328f, 0, 0.9608044783f, -0.2098363234f, -0.1811724921f, 0, 0.06817146062f, -0.9743405129f, 0.2145069156f, 0, -0.3577285196f, -0.6697087264f, -0.6507845481f, 0, -0.1868621131f, 0.7648617052f, -0.6164974636f, 0, -0.6541697588f, 0.3967914832f, 0.6439087246f, 0,
    0.6993340405f, -0.6164538506f, 0.3618239211f, 0, -0.1546665739f, 0.6291283928f, 0.7617583057f, 0, -0.6841612949f, -0.2580482182f, -0.6821542638f, 0, 0.5383980957f, 0.4258654885f, 0.7271630328f, 0, -0.5026987823f, -0.7939832935f, -0.3418836993f, 0, 0.3202971715f, 0.2834415347f, 0.9039195862f, 0, 0.8683227101f, -0.0003762656404f, -0.4959995258f, 0, 0.791120031f, -0.08511045745f, 0.6057105799f, 0,
    -0.04011016052f, -0.4397248749f, 0.8972364289f, 0, 0.9145119872f, 0.3579346169f, -0.1885487608f, 0, -0.9612039066f, -0.2756484276f, 0.01024666929f, 0, 0.6510361721f, -0.2877799159f, -0.7023778346f, 0, -0.2041786351f, 0.7365237271f, 0.644859585f, 0, -0.7718263711f, 0.3790626912f, 0.5104855816f, 0, -0.3060082741f, -0.7692987727f, 0.5608371729f, 0, 0.454007341f, -0.5024843065f, 0.7357899537f, 0,
    0.4816795475f, 0.6021208291f, -0.6367380315f, 0, 0.6961980369f, -0.3222197429f, 0.641469197f, 0, -0.6532160499f, -0.6781148932f, 0.3368515753f, 0, 0.5089301236f, -0.6154662304f, -0.6018234363f, 0, -0.1635919754f, -0.9133604627f, -0.372840892f, 0, 0.52408019f, -0.8437664109f, 0.1157505864f, 0, 0.5902587356f, 0.4983817807f, -0.6349883666f, 0, 0.5863227872f, 0.494764745f, 0.6414307729f, 0,
    0.6779335087f, 0.2341345225f, 0.6968408593f, 0, 0.7177054546f, -0.6858979348f, 0.120178631f, 0, -0.5328819713f, -0.5205125012f, 0.6671608058f, 0, -0.8654874251f, -0.0700727088f, -0.4960053754f, 0, -0.2861810166f, 0.7952089234f, 0.5345495242f, 0, -0.04849529634f, 0.9810836427f, -0.1874115585f, 0, -0.6358521667f, 0.6058348682f, 0.4781800233f, 0, 0.6254794696f, -0.2861619734f, 0.7258696564f, 0,
    -0.2585259868f, 0.5061949264f, -0.8227581726f, 0, 0.02136306781f, 0.5064016808f, -0.8620330371f, 0, 0.200111773f, 0.8599263484f, 0.4695550591f, 0, 0.4743561372f, 0.6014985084f, -0.6427953014f, 0, 0.6622993731f, -0.5202474575f, -0.5391679918f, 0, 0.08084972818f, -0.6532720452f, 0.7527940996f, 0, -0.6893687501f, 0.0592860349f, 0.7219805347f, 0, -0.1121887082f, -0.9673185067f, 0.2273952515f, 0,
    0.7344116094f, 0.5979668656f, -0.3210532909f, 0, 0.5789393465f, -0.2488849713f, 0.7764570201f, 0, 0.6988182827f, 0.3557169806f, -0.6205791146f, 0, -0.8636845529f, -0.2748771249f, -0.4224826141f, 0, -0.4247027957f, -0.4640880967f, 0.777335046f, 0, 0.5257722489f, -0.8427017621f, 0.1158329937f, 0, 0.9343830603f, 0.316302472f, -0.1639543925f, 0, -0.1016836419f, -0.8057303073f, -0.5834887393f, 0,
    -0.6529238969f, 0.50602126f, -0.5635892736f, 0, -0.2465286165f, -0.9668205684f, -0.06694497494f, 0, -0.9776897119f, -0.2099250524f, -0.007368825344f, 0, 0.7736893337f, 0.5734244712f, 0.2694238123f, 0, -0.6095087895f, 0.4995678998f, 0.6155736747f, 0, 0.5794535482f, 0.7434546771f, 0.3339292269f, 0, -0.8226211154f, 0.08142581855f, 0.5627293636f, 0, -0.510385483f, 0.4703667658f, 0.7199039967f, 0,
    -0.5764971849f, -0.07231656274f, -0.8138926898f, 0, 0.7250628871f, 0.3949971505f, -0.5641463116f, 0, -0.1525424005f, 0.4860840828f, -0.8604958341f, 0, -0.5550976208f, -0.4957820792f, 0.667882296f, 0, -0.1883614327f, 0.9145869398f, 0.357841725f, 0, 0.7625556724f, -0.5414408243f, -0.3540489801f, 0, -0.5870231946f, -0.3226498013f, -0.7424963803f, 0, 0.3051124198f, 0.2262544068f, -0.9250488391f, 0,
    0.6379576059f, 0.577242424f, -0.5097070502f, 0, -0.5966775796f, 0.1454852398f, -0.7891830656f, 0, -0.658330573f, 0.6555487542f, -0.3699414651f, 0, 0.7434892426f, 0.2351084581f, 0.6260573129f, 0, 0.5562114096f, 0.8264360377f, -0.0873632843f, 0, -0.3028940016f, -0.8251527185f, 0.4768419182f, 0, 0.1129343818f, -0.985888439f, -0.1235710781f, 0, 0.5937652891f, -0.5896813806f, 0.5474656618f, 0,
    0.6757964092f, -0.5835758614f, -0.4502648413f, 0, 0.7242302609f, -0.1152719764f, 0.6798550586f, 0, -0.9511914166f, 0.0753623979f, -0.2992580792f, 0, 0.2539470961f, -0.1886339355f, 0.9486454084f, 0, 0.571433621f, -0.1679450851f, -0.8032795685f, 0, -0.06778234979f, 0.3978269256f, 0.9149531629f, 0, 0.6074972649f, 0.733060024f, -0.3058922593f, 0, -0.5435478392f, 0.1675822484f, 0.8224791405f, 0,
    -0.5876678086f, -0.3380045064f, -0.7351186982f, 0, -0.7967562402f, 0.04097822706f, -0.6029098428f, 0, -0.1996350917f, 0.8706294745f, 0.4496111079f, 0, -0.02787660336f, -0.9106232682f, -0.4122962022f, 0, -0.7797625996f, -0.6257634692f, 0.01975775581f, 0, -0.5211232846f, 0.7401644346f, -0.4249554471f, 0, 0.8575424857f, 0.4053272873f, -0.3167501783f, 0, 0.1045223322f, 0.8390195772f, -0.5339674439f, 0,
    0.3501822831f, 0.9242524096f, -0.1520850155f, 0, 0.1987849858f, 0.07647613266f, 0.9770547224f, 0, 0.7845996363f, 0.6066256811f, -0.1280964233f, 0, 0.09006737436f, -0.9750989929f, -0.2026569073f, 0, -0.8274343547f, -0.542299559f, 0.1458203587f, 0, -0.3485797732f, -0.415802277f, 0.840000362f, 0, -0.2471778936f, -0.7304819962f, -0.6366310879f, 0, -0.3700154943f, 0.8577948156f, 0.3567584454f, 0,
    0.5913394901f, -0.548311967f, -0.5913303597f, 0, 0.1204873514f, -0.7626472379f, -0.6354935001f, 0, 0.616959265f, 0.03079647928f, 0.7863922953f, 0, 0.1258156836f, -0.6640829889f, -0.7369967419f, 0, -0.6477565124f, -0.1740147258f, -0.7417077429f, 0, 0.6217889313f, -0.7804430448f, -0.06547655076f, 0, 0.6589943422f, -0.6096987708f, 0.4404473475f, 0, -0.2689837504f, -0.6732403169f, -0.6887635427f, 0,
    -0.3849775103f, 0.5676542638f, 0.7277093879f, 0, 0.5754444408f, 0.8110471154f, -0.1051963504f, 0, 0.9141593684f, 0.3832947817f, 0.131900567f, 0, -0.107925319f, 0.9245493968f, 0.3654593525f, 0, 0.377977089f, 0.3043148782f, 0.8743716458f, 0, -0.2142885215f, -0.8259286236f, 0.5214617324f, 0, 0.5802544474f, 0.4148098596f, -0.7008834116f, 0, -0.1982660881f, 0.8567161266f, -0.4761596756f, 0,
    -0.03381553704f, 0.3773180787f, -0.9254661404f, 0, -0.6867922841f, -0.6656597827f, 0.2919133642f, 0, 0.7731742607f, -0.2875793547f, -0.5652430251f, 0, -0.09655941928f, 0.9193708367f, -0.3813575004f, 0, 0.2715702457f, -0.9577909544f, -0.09426605581f, 0, 0.2451015704f, -0.6917998565f, -0.6792188003f, 0, 0.977700782f, -0.1753855374f, 0.1155036542f, 0, -0.5224739938f, 0.8521606816f, 0.02903615945f, 0,
    -0.7734880599f, -0.5261292347f, 0.3534179531f, 0, -0.7134492443f, -0.269547243f, 0.6467878011f, 0, 0.1644037271f, 0.5105846203f, -0.8439637196f, 0, 0.6494635788f, 0.05585611296f, 0.7583384168f, 0, -0.4711970882f, 0.5017280509f, -0.7254255765f, 0, -0.6335764307f, -0.2381686273f, -0.7361091029f, 0, -0.9021533097f, -0.270947803f, -0.3357181763f, 0, -0.3793711033f, 0.872258117f, 0.3086152025f, 0,
    -0.6855598966f, -0.3250143309f, 0.6514394162f, 0, 0.2900942212f, -0.7799057743f, -0.5546100667f, 0, -0.2098319339f, 0.85037073f, 0.4825351604f, 0, -0.4592603758f, 0.6598504336f, -0.5947077538f, 0, 0.8715945488f, 0.09616365406f, -0.4807031248f, 0, -0.6776666319f, 0.7118504878f, -0.1844907016f, 0, 0.7044377633f, 0.312427597f, 0.637304036f, 0, -0.7052318886f, -0.2401093292f, -0.6670798253f, 0,
    0.081921007f, -0.7207336136f, -0.6883545647f, 0, -0.6993680906f, -0.5875763221f, -0.4069869034f, 0, -0.1281454481f, 0.6419895885f, 0.7559286424f, 0, -0.6337388239f, -0.6785471501f, -0.3714146849f, 0, 0.5565051903f, -0.2168887573f, -0.8020356851f, 0, -0.5791554484f, 0.7244372011f, -0.3738578718f, 0, 0.1175779076f, -0.7096451073f, 0.6946792478f, 0, -0.6134619607f, 0.1323631078f, 0.7785527795f, 0,
    0.6984635305f, -0.02980516237f, -0.715024719f, 0, 0.8318082963f, -0.3930171956f, 0.3919597455f, 0, 0.1469576422f, 0.05541651717f, -0.9875892167f, 0, 0.708868575f, -0.2690503865f, 0.6520101478f, 0, 0.2726053183f, 0.67369766f, -0.68688995f, 0, -0.6591295371f, 0.3035458599f, -0.6880466294f, 0, 0.4815131379f, -0.7528270071f, 0.4487723203f, 0, 0.9430009463f, 0.1675647412f, -0.2875261255f, 0,
    0.434802957f, 0.7695304522f, -0.4677277752f, 0, 0.3931996188f, 0.594473625f, 0.7014236729f, 0, 0.7254336655f, -0.603925654f, 0.3301814672f, 0, 0.7590235227f, -0.6506083235f, 0.02433313207f, 0, -0.8552768592f, -0.3430042733f, 0.3883935666f, 0, -0.6139746835f, 0.6981725247f, 0.3682257648f, 0, -0.7465905486f, -0.5752009504f, 0.3342849376f, 0, 0.5730065677f, 0.810555537f, -0.1210916791f, 0,
    -0.9225877367f, -0.3475211012f, -0.167514036f, 0, -0.7105816789f, -0.4719692027f, -0.5218416899f, 0, -0.08564609717f, 0.3583001386f, 0.929669703f, 0, -0.8279697606f, -0.2043157126f, 0.5222271202f, 0, 0.427944023f, 0.278165994f, 0.8599346446f, 0, 0.5399079671f, -0.7857120652f, -0.3019204161f, 0, 0.5678404253f, -0.5495413974f, -0.6128307303f, 0, -0.9896071041f, 0.1365639107f, -0.04503418428f, 0,
    -0.6154342638f, -0.6440875597f, 0.4543037336f, 0, 0.1074204368f, -0.7946340692f, 0.5975094525f, 0, -0.3595449969f, -0.8885529948f, 0.28495784f, 0, -0.2180405296f, 0.1529888965f, 0.9638738118f, 0, -0.7277432317f, -0.6164050508f, -0.3007234646f, 0, 0.7249729114f, -0.00669719484f, 0.6887448187f, 0, -0.5553659455f, -0.5336586252f, 0.6377908264f, 0, 0.5137558015f, 0.7976208196f, -0.3160000073f, 0,
    -0.3794024848f, 0.9245608561f, -0.03522751494f, 0, 0.8229248658f, 0.2745365933f, -0.4974176556f, 0, -0.5404114394f, 0.6091141441f, 0.5804613989f, 0, 0.8036581901f, -0.2703029469f, 0.5301601931f, 0, 0.6044318879f, 0.6832968393f, 0.4095943388f, 0, 0.06389988817f, 0.9658208605f, -0.2512108074f, 0, 0.1087113286f, 0.7402471173f, -0.6634877936f, 0, -0.713427712f, -0.6926784018f, 0.1059128479f, 0,
    0.6458897819f, -0.5724548511f, -0.5050958653f, 0, -0.6553931414f, 0.7381471625f, 0.159995615f, 0, 0.3910961323f, 0.9188871375f, -0.05186755998f, 0, -0.4879022471f, -0.5904376907f, 0.6429111375f, 0, 0.6014790094f, 0.7707441366f, -0.2101820095f, 0, -0.5677173047f, 0.7511360995f, 0.3368851762f, 0, 0.7858573506f, 0.226674665f, 0.5753666838f, 0, -0.4520345543f, -0.604222686f, -0.6561857263f, 0,
    0.002272116345f, 0.4132844051f, -0.9105991643f, 0, -0.5815751419f, -0.5162925989f, 0.6286591339f, 0, -0.03703704785f, 0.8273785755f, 0.5604221175f, 0, -0.5119692504f, 0.7953543429f, -0.3244980058f, 0, -0.2682417366f, -0.9572290247f, -0.1084387619f, 0, -0.2322482736f, -0.9679131102f, -0.09594243324f, 0, 0.3554328906f, -0.8881505545f, 0.2913006227f, 0, 0.7346520519f, -0.4371373164f, 0.5188422971f, 0,
    0.9985120116f, 0.04659011161f, -0.02833944577f, 0, -0.3727687496f, -0.9082481361f, 0.1900757285f, 0, 0.91737377f, -0.3483642108f, 0.1925298489f, 0, 0.2714911074f, 0.4147529736f, -0.8684886582f, 0, 0.5131763485f, -0.7116334161f, 0.4798207128f, 0, -0.8737353606f, 0.18886992f, -0.4482350644f, 0, 0.8460043821f, -0.3725217914f, 0.3814499973f, 0, 0.8978727456f, -0.1780209141f, -0.4026575304f, 0,
    0.2178065647f, -0.9698322841f, -0.1094789531f, 0, -0.1518031304f, -0.7788918132f, -0.6085091231f, 0, -0.2600384876f, -0.4755398075f, -0.8403819825f, 0, 0.572313509f, -0.7474340931f, -0.3373418503f, 0, -0.7174141009f, 0.1699017182f, -0.6756111411f, 0, -0.684180784f, 0.02145707593f, -0.7289967412f, 0, -0.2007447902f, 0.06555605789f, -0.9774476623f, 0, -0.1148803697f, -0.8044887315f, 0.5827524187f, 0,
    -0.7870349638f, 0.03447489231f, 0.6159443543f, 0, -0.2015596421f, 0.6859872284f, 0.6991389226f, 0, -0.08581082512f, -0.10920836f, -0.9903080513f, 0, 0.5532693395f, 0.7325250401f, -0.396610771f, 0, -0.1842489331f, -0.9777375055f, -0.1004076743f, 0, 0.0775473789f, -0.9111505856f, 0.4047110257f, 0, 0.1399838409f, 0.7601631212f, -0.6344734459f, 0, 0.4484419361f, -0.845289248f, 0.2904925424f, 0
};


static int Hash(int seed, int a, int b, int c)
{
    int hash = seed ^ a ^ b ^ c;

    hash *= 0xfc2841f2;
    return hash;
}
static float FastMin(float a, float b) { return a < b ? a : b; }
static float FastMax(float a, float b) { return a > b ? a : b; }
static double FastMin(double a, double b) { return a < b ? a : b; }
static double FastMax(double a, double b) { return a > b ? a : b; }

static int FastFloor(float f) { return f >= 0 ? (int)f : (int)f - 1; }
static int FastRound(float f) { return f >= 0 ? (int)(f + 0.5f) : (int)(f - 0.5f); }
static float FastAbs(float f) { return f < 0 ? -f : f; }
static int FastFloor(double f) { return f >= 0 ? (int)f : (int)f - 1; }
static int FastRound(double f) { return f >= 0 ? (int)(f + 0.5) : (int)(f - 0.5); }
static double FastAbs(double f) { return f < 0 ? -f : f; }

void CustomNoise::SetSeed(int pSeed) {
    if (Seed != pSeed) {

        short source[256];
        for (short i = 0; i < 256; i++)
        {
            source[i] = i;
        }
        Seed = pSeed;
        int64_t seed = Seed;
        seed = seed * 6364136223846793005l + 1442695040888963407l;
        seed = seed * 6364136223846793005l + 1442695040888963407l;
        seed = seed * 6364136223846793005l + 1442695040888963407l;

        
        FMath::RandInit(Seed);
        for (uint16 it = 0; it < 256; ++it)
        {
            seed = seed * 6364136223846793005l + 1442695040888963407l;
            uint8 nextNum = FMath::RandRange(0, 255);
            perm[it] = (unsigned char)nextNum;

            int r = static_cast<int>((seed + 31) % (it + 1));
            if (r < 0)
            {
                r += (it + 1);
            }
            m_perm[it] = source[r];
            m_permGradIndex3d[it] = static_cast<short>((m_perm[it] % (m_gradients3d.size() / 3)) * 3);
            source[r] = source[it];
        }


    }

}




// Hashing
static const int PrimeX = 501125321;
static const int PrimeY = 1136930381;
static const int PrimeZ = 1720413743;


float CustomNoise::CellularNoise(float x, float y, float z, ECellularDistanceType CellularDistanceType, ECellularType CellularType, float cellularJitter)
{
    int xr = FastRound(x);
    int yr = FastRound(y);
    int zr = FastRound(z);

    float distance0 = 1e10f;
    float distance1 = 1e10f;
    int closestHash = 0;

    cellularJitter *= 0.39614353f;

    int xPrimed = (xr - 1) * PrimeX;
    int yPrimedBase = (yr - 1) * PrimeY;
    int zPrimedBase = (zr - 1) * PrimeZ;

    switch (CellularDistanceType)
    {
    case ECellularDistanceType::Euclidean:
    case ECellularDistanceType::EuclideanSq:
        for (int xi = xr - 1; xi <= xr + 1; xi++)
        {
            int yPrimed = yPrimedBase;

            for (int yi = yr - 1; yi <= yr + 1; yi++)
            {
                int zPrimed = zPrimedBase;

                for (int zi = zr - 1; zi <= zr + 1; zi++)
                {
                    int hash = Hash(Seed, xPrimed, yPrimed, zPrimed);
                    int idx = hash & (255 << 2);

                    
                    float vecX = (float)(xi - x) + RandomVect3D[idx] * cellularJitter;
                    float vecY = (float)(yi - y) + RandomVect3D[idx|1] * cellularJitter;
                    float vecZ = (float)(zi - z) + RandomVect3D[idx|2] * cellularJitter;

                    float newDistance = vecX * vecX + vecY * vecY + vecZ * vecZ;

                    distance1 = FastMax(FastMin(distance1, newDistance), distance0);
                    if (newDistance < distance0)
                    {
                        distance0 = newDistance;
                        closestHash = hash;
                    }
                    zPrimed += PrimeZ;
                }
                yPrimed += PrimeY;
            }
            xPrimed += PrimeX;
        }
        break;
    case ECellularDistanceType::Manhattan:
        for (int xi = xr - 1; xi <= xr + 1; xi++)
        {
            int yPrimed = yPrimedBase;

            for (int yi = yr - 1; yi <= yr + 1; yi++)
            {
                int zPrimed = zPrimedBase;

                for (int zi = zr - 1; zi <= zr + 1; zi++)
                {
                    int hash = Hash(Seed, xPrimed, yPrimed, zPrimed);
                    int idx = hash & (255 << 2);

                    float vecX = (float)(xi - x) + RandomVect3D[idx] * cellularJitter;
                    float vecY = (float)(yi - y) + RandomVect3D[idx | 1] * cellularJitter;
                    float vecZ = (float)(zi - z) + RandomVect3D[idx | 2] * cellularJitter;

                    float newDistance = FastAbs(vecX) + FastAbs(vecY) + FastAbs(vecZ);

                    distance1 = FastMax(FastMin(distance1, newDistance), distance0);
                    if (newDistance < distance0)
                    {
                        distance0 = newDistance;
                        closestHash = hash;
                    }
                    zPrimed += PrimeZ;
                }
                yPrimed += PrimeY;
            }
            xPrimed += PrimeX;
        }
        break;
    case ECellularDistanceType::Hybrid:
        for (int xi = xr - 1; xi <= xr + 1; xi++)
        {
            int yPrimed = yPrimedBase;

            for (int yi = yr - 1; yi <= yr + 1; yi++)
            {
                int zPrimed = zPrimedBase;

                for (int zi = zr - 1; zi <= zr + 1; zi++)
                {
                    int hash = Hash(Seed, xPrimed, yPrimed, zPrimed);
                    int idx = hash & (255 << 2);

                    float vecX = (float)(xi - x) + RandomVect3D[idx] * cellularJitter;
                    float vecY = (float)(yi - y) + RandomVect3D[idx | 1] * cellularJitter;
                    float vecZ = (float)(zi - z) + RandomVect3D[idx | 2] * cellularJitter;

                    float newDistance = (FastAbs(vecX) + FastAbs(vecY) + FastAbs(vecZ)) + (vecX * vecX + vecY * vecY + vecZ * vecZ);

                    distance1 = FastMax(FastMin(distance1, newDistance), distance0);
                    if (newDistance < distance0)
                    {
                        distance0 = newDistance;
                        closestHash = hash;
                    }
                    zPrimed += PrimeZ;
                }
                yPrimed += PrimeY;
            }
            xPrimed += PrimeX;
        }
        break;
    default:
        break;
    }

    if (CellularDistanceType == Euclidean && CellularType >= ECellularType::Distance)
    {
        distance0 = sqrtf(distance0);

        if (CellularType >= ECellularType::Distance2)
        {
            distance1 = sqrtf(distance1);
        }
    }

    switch (CellularType)
    {
    case ECellularType::CellValue:
        return closestHash * (1 / 2147483648.0f);
    case ECellularType::Distance:
        return distance0 - 1;
    case ECellularType::Distance2:
        return distance1 - 1;
    case ECellularType::Distance2Add:
        return (distance1 + distance0) * 0.5f - 1;
    case ECellularType::Distance2Sub:
        return distance1 - distance0 - 1;
    case ECellularType::Distance2Mul:
        return distance1 * distance0 * 0.5f - 1;
    case ECellularType::Distance2Div:
        return distance0 / distance1 - 1;
    default:
        return 0;
    }
}

double CustomNoise::CellularNoise(double x, double y, double z, ECellularDistanceType CellularDistanceType, ECellularType CellularType, double cellularJitter)
{
    int xr = FastRound(x);
    int yr = FastRound(y);
    int zr = FastRound(z);

    double distance0 = 1e10f;
    double distance1 = 1e10f;
    int closestHash = 0;

    cellularJitter *= 0.39614353f;

    int xPrimed = (xr - 1) * PrimeX;
    int yPrimedBase = (yr - 1) * PrimeY;
    int zPrimedBase = (zr - 1) * PrimeZ;

    switch (CellularDistanceType)
    {
    case ECellularDistanceType::Euclidean:
    case ECellularDistanceType::EuclideanSq:
        for (int xi = xr - 1; xi <= xr + 1; xi++)
        {
            int yPrimed = yPrimedBase;

            for (int yi = yr - 1; yi <= yr + 1; yi++)
            {
                int zPrimed = zPrimedBase;

                for (int zi = zr - 1; zi <= zr + 1; zi++)
                {
                    int hash = Hash(Seed, xPrimed, yPrimed, zPrimed);
                    int idx = hash & (255 << 2);


                    double vecX = (float)(xi - x) + RandomVect3D[idx] * cellularJitter;
                    double vecY = (float)(yi - y) + RandomVect3D[idx | 1] * cellularJitter;
                    double vecZ = (float)(zi - z) + RandomVect3D[idx | 2] * cellularJitter;

                    double newDistance = vecX * vecX + vecY * vecY + vecZ * vecZ;

                    distance1 = FastMax(FastMin(distance1, newDistance), distance0);
                    if (newDistance < distance0)
                    {
                        distance0 = newDistance;
                        closestHash = hash;
                    }
                    zPrimed += PrimeZ;
                }
                yPrimed += PrimeY;
            }
            xPrimed += PrimeX;
        }
        break;
    case ECellularDistanceType::Manhattan:
        for (int xi = xr - 1; xi <= xr + 1; xi++)
        {
            int yPrimed = yPrimedBase;

            for (int yi = yr - 1; yi <= yr + 1; yi++)
            {
                int zPrimed = zPrimedBase;

                for (int zi = zr - 1; zi <= zr + 1; zi++)
                {
                    int hash = Hash(Seed, xPrimed, yPrimed, zPrimed);
                    int idx = hash & (255 << 2);

                    double vecX = (float)(xi - x) + RandomVect3D[idx] * cellularJitter;
                    double vecY = (float)(yi - y) + RandomVect3D[idx | 1] * cellularJitter;
                    double vecZ = (float)(zi - z) + RandomVect3D[idx | 2] * cellularJitter;

                    double newDistance = FastAbs(vecX) + FastAbs(vecY) + FastAbs(vecZ);

                    distance1 = FastMax(FastMin(distance1, newDistance), distance0);
                    if (newDistance < distance0)
                    {
                        distance0 = newDistance;
                        closestHash = hash;
                    }
                    zPrimed += PrimeZ;
                }
                yPrimed += PrimeY;
            }
            xPrimed += PrimeX;
        }
        break;
    case ECellularDistanceType::Hybrid:
        for (int xi = xr - 1; xi <= xr + 1; xi++)
        {
            int yPrimed = yPrimedBase;

            for (int yi = yr - 1; yi <= yr + 1; yi++)
            {
                int zPrimed = zPrimedBase;

                for (int zi = zr - 1; zi <= zr + 1; zi++)
                {
                    int hash = Hash(Seed, xPrimed, yPrimed, zPrimed);
                    int idx = hash & (255 << 2);

                    double vecX = (double)(xi - x) + RandomVect3D[idx] * cellularJitter;
                    double vecY = (double)(yi - y) + RandomVect3D[idx | 1] * cellularJitter;
                    double vecZ = (double)(zi - z) + RandomVect3D[idx | 2] * cellularJitter;

                    double newDistance = (FastAbs(vecX) + FastAbs(vecY) + FastAbs(vecZ)) + (vecX * vecX + vecY * vecY + vecZ * vecZ);

                    distance1 = FastMax(FastMin(distance1, newDistance), distance0);
                    if (newDistance < distance0)
                    {
                        distance0 = newDistance;
                        closestHash = hash;
                    }
                    zPrimed += PrimeZ;
                }
                yPrimed += PrimeY;
            }
            xPrimed += PrimeX;
        }
        break;
    default:
        break;
    }

    if (CellularDistanceType == Euclidean && CellularType >= ECellularType::Distance)
    {
        distance0 = sqrtf(distance0);

        if (CellularType >= ECellularType::Distance2)
        {
            distance1 = sqrtf(distance1);
        }
    }

    switch (CellularType)
    {
    case ECellularType::CellValue:
        return closestHash * (1 / 2147483648.0f);
    case ECellularType::Distance:
        return distance0 - 1;
    case ECellularType::Distance2:
        return distance1 - 1;
    case ECellularType::Distance2Add:
        return (distance1 + distance0) * 0.5f - 1;
    case ECellularType::Distance2Sub:
        return distance1 - distance0 - 1;
    case ECellularType::Distance2Mul:
        return distance1 * distance0 * 0.5f - 1;
    case ECellularType::Distance2Div:
        return distance0 / distance1 - 1;
    default:
        return 0;
    }
}


double CustomNoise::OpenSimplexNoise(FVector position) const {

    return OpenSimplexNoise(position.X, position.Y, position.Z);
}

double CustomNoise::OpenSimplexNoise(DVector position) const {

    return OpenSimplexNoise(position.X, position.Y, position.Z);
}



double CustomNoise::OpenSimplexNoise(double x, double y, double z) const
{

    //Place input coordinates on simplectic honeycomb.
    double stretchOffset = (x + y + z) * m_stretch3d;
    double xs = x + stretchOffset;
    double ys = y + stretchOffset;
    double zs = z + stretchOffset;

    //static_cast<int>(floor to get simplectic honeycomb coordinates of rhombohedron (stretched cube) super-cell origin.
    int xsb = static_cast<int>(floor(xs));
    int ysb = static_cast<int>(floor(ys));
    int zsb = static_cast<int>(floor(zs));

    //Skew out to get actual coordinates of rhombohedron origin. We'll need these later.
    double squishOffset = (xsb + ysb + zsb) * m_squish3d;
    double xb = xsb + squishOffset;
    double yb = ysb + squishOffset;
    double zb = zsb + squishOffset;

    //Compute simplectic honeycomb coordinates relative to rhombohedral origin.
    double xins = xs - xsb;
    double yins = ys - ysb;
    double zins = zs - zsb;

    //Sum those together to get a value that determines which region we're in.
    double inSum = xins + yins + zins;

    //Positions relative to origin point.
    double dx0 = x - xb;
    double dy0 = y - yb;
    double dz0 = z - zb;

    //We'll be defining these inside the next block and using them afterwards.
    double dx_ext0, dy_ext0, dz_ext0;
    double dx_ext1, dy_ext1, dz_ext1;
    int xsv_ext0, ysv_ext0, zsv_ext0;
    int xsv_ext1, ysv_ext1, zsv_ext1;

    double value = 0;
    if (inSum <= 1)
    { //We're inside the tetrahedron (3-Simplex) at (0,0,0)

//Determine which two of (0,0,1), (0,1,0), (1,0,0) are closest.
        char aPoint = 0x01;
        double aScore = xins;
        char bPoint = 0x02;
        double bScore = yins;
        if (aScore >= bScore && zins > bScore)
        {
            bScore = zins;
            bPoint = 0x04;
        }
        else if (aScore < bScore && zins > aScore)
        {
            aScore = zins;
            aPoint = 0x04;
        }

        //Now we determine the two lattice points not part of the tetrahedron that may contribute.
        //This depends on the closest two tetrahedral vertices, including (0,0,0)
        double wins = 1 - inSum;
        if (wins > aScore || wins > bScore)
        { //(0,0,0) is one of the closest two tetrahedral vertices.
            char c = (bScore > aScore ? bPoint : aPoint); //Our other closest vertex is the closest out of a and b.

            if ((c & 0x01) == 0)
            {
                xsv_ext0 = xsb - 1;
                xsv_ext1 = xsb;
                dx_ext0 = dx0 + 1;
                dx_ext1 = dx0;
            }
            else
            {
                xsv_ext0 = xsv_ext1 = xsb + 1;
                dx_ext0 = dx_ext1 = dx0 - 1;
            }

            if ((c & 0x02) == 0)
            {
                ysv_ext0 = ysv_ext1 = ysb;
                dy_ext0 = dy_ext1 = dy0;
                if ((c & 0x01) == 0)
                {
                    ysv_ext1 -= 1;
                    dy_ext1 += 1;
                }
                else
                {
                    ysv_ext0 -= 1;
                    dy_ext0 += 1;
                }
            }
            else
            {
                ysv_ext0 = ysv_ext1 = ysb + 1;
                dy_ext0 = dy_ext1 = dy0 - 1;
            }

            if ((c & 0x04) == 0)
            {
                zsv_ext0 = zsb;
                zsv_ext1 = zsb - 1;
                dz_ext0 = dz0;
                dz_ext1 = dz0 + 1;
            }
            else
            {
                zsv_ext0 = zsv_ext1 = zsb + 1;
                dz_ext0 = dz_ext1 = dz0 - 1;
            }
        }
        else
        { //(0,0,0) is not one of the closest two tetrahedral vertices.
            char c = static_cast<char>(aPoint | bPoint); //Our two extra vertices are determined by the closest two.

            if ((c & 0x01) == 0)
            {
                xsv_ext0 = xsb;
                xsv_ext1 = xsb - 1;
                dx_ext0 = dx0 - 2 * m_squish3d;
                dx_ext1 = dx0 + 1 - m_squish3d;
            }
            else
            {
                xsv_ext0 = xsv_ext1 = xsb + 1;
                dx_ext0 = dx0 - 1 - 2 * m_squish3d;
                dx_ext1 = dx0 - 1 - m_squish3d;
            }

            if ((c & 0x02) == 0)
            {
                ysv_ext0 = ysb;
                ysv_ext1 = ysb - 1;
                dy_ext0 = dy0 - 2 * m_squish3d;
                dy_ext1 = dy0 + 1 - m_squish3d;
            }
            else
            {
                ysv_ext0 = ysv_ext1 = ysb + 1;
                dy_ext0 = dy0 - 1 - 2 * m_squish3d;
                dy_ext1 = dy0 - 1 - m_squish3d;
            }

            if ((c & 0x04) == 0)
            {
                zsv_ext0 = zsb;
                zsv_ext1 = zsb - 1;
                dz_ext0 = dz0 - 2 * m_squish3d;
                dz_ext1 = dz0 + 1 - m_squish3d;
            }
            else
            {
                zsv_ext0 = zsv_ext1 = zsb + 1;
                dz_ext0 = dz0 - 1 - 2 * m_squish3d;
                dz_ext1 = dz0 - 1 - m_squish3d;
            }
        }

        //Contribution (0,0,0)
        double attn0 = 2 - dx0 * dx0 - dy0 * dy0 - dz0 * dz0;
        if (attn0 > 0)
        {
            attn0 *= attn0;
            value += attn0 * attn0 * extrapolate(xsb + 0, ysb + 0, zsb + 0, dx0, dy0, dz0);
        }

        //Contribution (1,0,0)
        double dx1 = dx0 - 1 - m_squish3d;
        double dy1 = dy0 - 0 - m_squish3d;
        double dz1 = dz0 - 0 - m_squish3d;
        double attn1 = 2 - dx1 * dx1 - dy1 * dy1 - dz1 * dz1;
        if (attn1 > 0)
        {
            attn1 *= attn1;
            value += attn1 * attn1 * extrapolate(xsb + 1, ysb + 0, zsb + 0, dx1, dy1, dz1);
        }

        //Contribution (0,1,0)
        double dx2 = dx0 - 0 - m_squish3d;
        double dy2 = dy0 - 1 - m_squish3d;
        double dz2 = dz1;
        double attn2 = 2 - dx2 * dx2 - dy2 * dy2 - dz2 * dz2;
        if (attn2 > 0)
        {
            attn2 *= attn2;
            value += attn2 * attn2 * extrapolate(xsb + 0, ysb + 1, zsb + 0, dx2, dy2, dz2);
        }

        //Contribution (0,0,1)
        double dx3 = dx2;
        double dy3 = dy1;
        double dz3 = dz0 - 1 - m_squish3d;
        double attn3 = 2 - dx3 * dx3 - dy3 * dy3 - dz3 * dz3;
        if (attn3 > 0)
        {
            attn3 *= attn3;
            value += attn3 * attn3 * extrapolate(xsb + 0, ysb + 0, zsb + 1, dx3, dy3, dz3);
        }
    }
    else if (inSum >= 2)
    { //We're inside the tetrahedron (3-Simplex) at (1,1,1)

//Determine which two tetrahedral vertices are the closest, out of (1,1,0), (1,0,1), (0,1,1) but not (1,1,1).
        char aPoint = 0x06;
        double aScore = xins;
        char bPoint = 0x05;
        double bScore = yins;
        if (aScore <= bScore && zins < bScore)
        {
            bScore = zins;
            bPoint = 0x03;
        }
        else if (aScore > bScore && zins < aScore)
        {
            aScore = zins;
            aPoint = 0x03;
        }

        //Now we determine the two lattice points not part of the tetrahedron that may contribute.
        //This depends on the closest two tetrahedral vertices, including (1,1,1)
        double wins = 3 - inSum;
        if (wins < aScore || wins < bScore)
        { //(1,1,1) is one of the closest two tetrahedral vertices.
            char c = (bScore < aScore ? bPoint : aPoint); //Our other closest vertex is the closest out of a and b.

            if ((c & 0x01) != 0)
            {
                xsv_ext0 = xsb + 2;
                xsv_ext1 = xsb + 1;
                dx_ext0 = dx0 - 2 - 3 * m_squish3d;
                dx_ext1 = dx0 - 1 - 3 * m_squish3d;
            }
            else
            {
                xsv_ext0 = xsv_ext1 = xsb;
                dx_ext0 = dx_ext1 = dx0 - 3 * m_squish3d;
            }

            if ((c & 0x02) != 0)
            {
                ysv_ext0 = ysv_ext1 = ysb + 1;
                dy_ext0 = dy_ext1 = dy0 - 1 - 3 * m_squish3d;
                if ((c & 0x01) != 0)
                {
                    ysv_ext1 += 1;
                    dy_ext1 -= 1;
                }
                else
                {
                    ysv_ext0 += 1;
                    dy_ext0 -= 1;
                }
            }
            else
            {
                ysv_ext0 = ysv_ext1 = ysb;
                dy_ext0 = dy_ext1 = dy0 - 3 * m_squish3d;
            }

            if ((c & 0x04) != 0)
            {
                zsv_ext0 = zsb + 1;
                zsv_ext1 = zsb + 2;
                dz_ext0 = dz0 - 1 - 3 * m_squish3d;
                dz_ext1 = dz0 - 2 - 3 * m_squish3d;
            }
            else
            {
                zsv_ext0 = zsv_ext1 = zsb;
                dz_ext0 = dz_ext1 = dz0 - 3 * m_squish3d;
            }
        }
        else
        { //(1,1,1) is not one of the closest two tetrahedral vertices.
            char c = static_cast<char>(aPoint & bPoint); //Our two extra vertices are determined by the closest two.

            if ((c & 0x01) != 0)
            {
                xsv_ext0 = xsb + 1;
                xsv_ext1 = xsb + 2;
                dx_ext0 = dx0 - 1 - m_squish3d;
                dx_ext1 = dx0 - 2 - 2 * m_squish3d;
            }
            else
            {
                xsv_ext0 = xsv_ext1 = xsb;
                dx_ext0 = dx0 - m_squish3d;
                dx_ext1 = dx0 - 2 * m_squish3d;
            }

            if ((c & 0x02) != 0)
            {
                ysv_ext0 = ysb + 1;
                ysv_ext1 = ysb + 2;
                dy_ext0 = dy0 - 1 - m_squish3d;
                dy_ext1 = dy0 - 2 - 2 * m_squish3d;
            }
            else
            {
                ysv_ext0 = ysv_ext1 = ysb;
                dy_ext0 = dy0 - m_squish3d;
                dy_ext1 = dy0 - 2 * m_squish3d;
            }

            if ((c & 0x04) != 0)
            {
                zsv_ext0 = zsb + 1;
                zsv_ext1 = zsb + 2;
                dz_ext0 = dz0 - 1 - m_squish3d;
                dz_ext1 = dz0 - 2 - 2 * m_squish3d;
            }
            else
            {
                zsv_ext0 = zsv_ext1 = zsb;
                dz_ext0 = dz0 - m_squish3d;
                dz_ext1 = dz0 - 2 * m_squish3d;
            }
        }

        //Contribution (1,1,0)
        double dx3 = dx0 - 1 - 2 * m_squish3d;
        double dy3 = dy0 - 1 - 2 * m_squish3d;
        double dz3 = dz0 - 0 - 2 * m_squish3d;
        double attn3 = 2 - dx3 * dx3 - dy3 * dy3 - dz3 * dz3;
        if (attn3 > 0)
        {
            attn3 *= attn3;
            value += attn3 * attn3 * extrapolate(xsb + 1, ysb + 1, zsb + 0, dx3, dy3, dz3);
        }

        //Contribution (1,0,1)
        double dx2 = dx3;
        double dy2 = dy0 - 0 - 2 * m_squish3d;
        double dz2 = dz0 - 1 - 2 * m_squish3d;
        double attn2 = 2 - dx2 * dx2 - dy2 * dy2 - dz2 * dz2;
        if (attn2 > 0)
        {
            attn2 *= attn2;
            value += attn2 * attn2 * extrapolate(xsb + 1, ysb + 0, zsb + 1, dx2, dy2, dz2);
        }

        //Contribution (0,1,1)
        double dx1 = dx0 - 0 - 2 * m_squish3d;
        double dy1 = dy3;
        double dz1 = dz2;
        double attn1 = 2 - dx1 * dx1 - dy1 * dy1 - dz1 * dz1;
        if (attn1 > 0)
        {
            attn1 *= attn1;
            value += attn1 * attn1 * extrapolate(xsb + 0, ysb + 1, zsb + 1, dx1, dy1, dz1);
        }

        //Contribution (1,1,1)
        dx0 = dx0 - 1 - 3 * m_squish3d;
        dy0 = dy0 - 1 - 3 * m_squish3d;
        dz0 = dz0 - 1 - 3 * m_squish3d;
        double attn0 = 2 - dx0 * dx0 - dy0 * dy0 - dz0 * dz0;
        if (attn0 > 0)
        {
            attn0 *= attn0;
            value += attn0 * attn0 * extrapolate(xsb + 1, ysb + 1, zsb + 1, dx0, dy0, dz0);
        }
    }
    else
    { //We're inside the octahedron (Rectified 3-Simplex) in between.
        double aScore;
        char aPoint;
        bool aIsFurtherSide;
        double bScore;
        char bPoint;
        bool bIsFurtherSide;

        //Decide between point (0,0,1) and (1,1,0) as closest
        double p1 = xins + yins;
        if (p1 > 1)
        {
            aScore = p1 - 1;
            aPoint = 0x03;
            aIsFurtherSide = true;
        }
        else
        {
            aScore = 1 - p1;
            aPoint = 0x04;
            aIsFurtherSide = false;
        }

        //Decide between point (0,1,0) and (1,0,1) as closest
        double p2 = xins + zins;
        if (p2 > 1)
        {
            bScore = p2 - 1;
            bPoint = 0x05;
            bIsFurtherSide = true;
        }
        else
        {
            bScore = 1 - p2;
            bPoint = 0x02;
            bIsFurtherSide = false;
        }

        //The closest out of the two (1,0,0) and (0,1,1) will replace the furthest out of the two decided above, if closer.
        double p3 = yins + zins;
        if (p3 > 1)
        {
            double score = p3 - 1;
            if (aScore <= bScore && aScore < score)
            {
                aScore = score;
                aPoint = 0x06;
                aIsFurtherSide = true;
            }
            else if (aScore > bScore && bScore < score)
            {
                bScore = score;
                bPoint = 0x06;
                bIsFurtherSide = true;
            }
        }
        else
        {
            double score = 1 - p3;
            if (aScore <= bScore && aScore < score)
            {
                aScore = score;
                aPoint = 0x01;
                aIsFurtherSide = false;
            }
            else if (aScore > bScore && bScore < score)
            {
                bScore = score;
                bPoint = 0x01;
                bIsFurtherSide = false;
            }
        }

        //Where each of the two closest points are determines how the extra two vertices are calculated.
        if (aIsFurtherSide == bIsFurtherSide)
        {
            if (aIsFurtherSide)
            { //Both closest points on (1,1,1) side

    //One of the two extra points is (1,1,1)
                dx_ext0 = dx0 - 1 - 3 * m_squish3d;
                dy_ext0 = dy0 - 1 - 3 * m_squish3d;
                dz_ext0 = dz0 - 1 - 3 * m_squish3d;
                xsv_ext0 = xsb + 1;
                ysv_ext0 = ysb + 1;
                zsv_ext0 = zsb + 1;

                //Other extra point is based on the shared axis.
                char c = static_cast<char>(aPoint & bPoint);
                if ((c & 0x01) != 0)
                {
                    dx_ext1 = dx0 - 2 - 2 * m_squish3d;
                    dy_ext1 = dy0 - 2 * m_squish3d;
                    dz_ext1 = dz0 - 2 * m_squish3d;
                    xsv_ext1 = xsb + 2;
                    ysv_ext1 = ysb;
                    zsv_ext1 = zsb;
                }
                else if ((c & 0x02) != 0)
                {
                    dx_ext1 = dx0 - 2 * m_squish3d;
                    dy_ext1 = dy0 - 2 - 2 * m_squish3d;
                    dz_ext1 = dz0 - 2 * m_squish3d;
                    xsv_ext1 = xsb;
                    ysv_ext1 = ysb + 2;
                    zsv_ext1 = zsb;
                }
                else
                {
                    dx_ext1 = dx0 - 2 * m_squish3d;
                    dy_ext1 = dy0 - 2 * m_squish3d;
                    dz_ext1 = dz0 - 2 - 2 * m_squish3d;
                    xsv_ext1 = xsb;
                    ysv_ext1 = ysb;
                    zsv_ext1 = zsb + 2;
                }
            }
            else
            {//Both closest points on (0,0,0) side

               //One of the two extra points is (0,0,0)
                dx_ext0 = dx0;
                dy_ext0 = dy0;
                dz_ext0 = dz0;
                xsv_ext0 = xsb;
                ysv_ext0 = ysb;
                zsv_ext0 = zsb;

                //Other extra point is based on the omitted axis.
                char c = static_cast<char>(aPoint | bPoint);
                if ((c & 0x01) == 0)
                {
                    dx_ext1 = dx0 + 1 - m_squish3d;
                    dy_ext1 = dy0 - 1 - m_squish3d;
                    dz_ext1 = dz0 - 1 - m_squish3d;
                    xsv_ext1 = xsb - 1;
                    ysv_ext1 = ysb + 1;
                    zsv_ext1 = zsb + 1;
                }
                else if ((c & 0x02) == 0)
                {
                    dx_ext1 = dx0 - 1 - m_squish3d;
                    dy_ext1 = dy0 + 1 - m_squish3d;
                    dz_ext1 = dz0 - 1 - m_squish3d;
                    xsv_ext1 = xsb + 1;
                    ysv_ext1 = ysb - 1;
                    zsv_ext1 = zsb + 1;
                }
                else
                {
                    dx_ext1 = dx0 - 1 - m_squish3d;
                    dy_ext1 = dy0 - 1 - m_squish3d;
                    dz_ext1 = dz0 + 1 - m_squish3d;
                    xsv_ext1 = xsb + 1;
                    ysv_ext1 = ysb + 1;
                    zsv_ext1 = zsb - 1;
                }
            }
        }
        else
        { //One point on (0,0,0) side, one point on (1,1,1) side
            char c1, c2;
            if (aIsFurtherSide)
            {
                c1 = aPoint;
                c2 = bPoint;
            }
            else
            {
                c1 = bPoint;
                c2 = aPoint;
            }

            //One contribution is a permutation of (1,1,-1)
            if ((c1 & 0x01) == 0)
            {
                dx_ext0 = dx0 + 1 - m_squish3d;
                dy_ext0 = dy0 - 1 - m_squish3d;
                dz_ext0 = dz0 - 1 - m_squish3d;
                xsv_ext0 = xsb - 1;
                ysv_ext0 = ysb + 1;
                zsv_ext0 = zsb + 1;
            }
            else if ((c1 & 0x02) == 0)
            {
                dx_ext0 = dx0 - 1 - m_squish3d;
                dy_ext0 = dy0 + 1 - m_squish3d;
                dz_ext0 = dz0 - 1 - m_squish3d;
                xsv_ext0 = xsb + 1;
                ysv_ext0 = ysb - 1;
                zsv_ext0 = zsb + 1;
            }
            else
            {
                dx_ext0 = dx0 - 1 - m_squish3d;
                dy_ext0 = dy0 - 1 - m_squish3d;
                dz_ext0 = dz0 + 1 - m_squish3d;
                xsv_ext0 = xsb + 1;
                ysv_ext0 = ysb + 1;
                zsv_ext0 = zsb - 1;
            }

            //One contribution is a permutation of (0,0,2)
            dx_ext1 = dx0 - 2 * m_squish3d;
            dy_ext1 = dy0 - 2 * m_squish3d;
            dz_ext1 = dz0 - 2 * m_squish3d;
            xsv_ext1 = xsb;
            ysv_ext1 = ysb;
            zsv_ext1 = zsb;
            if ((c2 & 0x01) != 0)
            {
                dx_ext1 -= 2;
                xsv_ext1 += 2;
            }
            else if ((c2 & 0x02) != 0)
            {
                dy_ext1 -= 2;
                ysv_ext1 += 2;
            }
            else
            {
                dz_ext1 -= 2;
                zsv_ext1 += 2;
            }
        }

        //Contribution (1,0,0)
        double dx1 = dx0 - 1 - m_squish3d;
        double dy1 = dy0 - 0 - m_squish3d;
        double dz1 = dz0 - 0 - m_squish3d;
        double attn1 = 2 - dx1 * dx1 - dy1 * dy1 - dz1 * dz1;
        if (attn1 > 0)
        {
            attn1 *= attn1;
            value += attn1 * attn1 * extrapolate(xsb + 1, ysb + 0, zsb + 0, dx1, dy1, dz1);
        }

        //Contribution (0,1,0)
        double dx2 = dx0 - 0 - m_squish3d;
        double dy2 = dy0 - 1 - m_squish3d;
        double dz2 = dz1;
        double attn2 = 2 - dx2 * dx2 - dy2 * dy2 - dz2 * dz2;
        if (attn2 > 0)
        {
            attn2 *= attn2;
            value += attn2 * attn2 * extrapolate(xsb + 0, ysb + 1, zsb + 0, dx2, dy2, dz2);
        }

        //Contribution (0,0,1)
        double dx3 = dx2;
        double dy3 = dy1;
        double dz3 = dz0 - 1 - m_squish3d;
        double attn3 = 2 - dx3 * dx3 - dy3 * dy3 - dz3 * dz3;
        if (attn3 > 0)
        {
            attn3 *= attn3;
            value += attn3 * attn3 * extrapolate(xsb + 0, ysb + 0, zsb + 1, dx3, dy3, dz3);
        }

        //Contribution (1,1,0)
        double dx4 = dx0 - 1 - 2 * m_squish3d;
        double dy4 = dy0 - 1 - 2 * m_squish3d;
        double dz4 = dz0 - 0 - 2 * m_squish3d;
        double attn4 = 2 - dx4 * dx4 - dy4 * dy4 - dz4 * dz4;
        if (attn4 > 0)
        {
            attn4 *= attn4;
            value += attn4 * attn4 * extrapolate(xsb + 1, ysb + 1, zsb + 0, dx4, dy4, dz4);
        }

        //Contribution (1,0,1)
        double dx5 = dx4;
        double dy5 = dy0 - 0 - 2 * m_squish3d;
        double dz5 = dz0 - 1 - 2 * m_squish3d;
        double attn5 = 2 - dx5 * dx5 - dy5 * dy5 - dz5 * dz5;
        if (attn5 > 0)
        {
            attn5 *= attn5;
            value += attn5 * attn5 * extrapolate(xsb + 1, ysb + 0, zsb + 1, dx5, dy5, dz5);
        }

        //Contribution (0,1,1)
        double dx6 = dx0 - 0 - 2 * m_squish3d;
        double dy6 = dy4;
        double dz6 = dz5;
        double attn6 = 2 - dx6 * dx6 - dy6 * dy6 - dz6 * dz6;
        if (attn6 > 0)
        {
            attn6 *= attn6;
            value += attn6 * attn6 * extrapolate(xsb + 0, ysb + 1, zsb + 1, dx6, dy6, dz6);
        }
    }

    //First extra vertex
    double attn_ext0 = 2 - dx_ext0 * dx_ext0 - dy_ext0 * dy_ext0 - dz_ext0 * dz_ext0;
    if (attn_ext0 > 0)
    {
        attn_ext0 *= attn_ext0;
        value += attn_ext0 * attn_ext0 * extrapolate(xsv_ext0, ysv_ext0, zsv_ext0, dx_ext0, dy_ext0, dz_ext0);
    }

    //Second extra vertex
    double attn_ext1 = 2 - dx_ext1 * dx_ext1 - dy_ext1 * dy_ext1 - dz_ext1 * dz_ext1;
    if (attn_ext1 > 0)
    {
        attn_ext1 *= attn_ext1;
        value += attn_ext1 * attn_ext1 * extrapolate(xsv_ext1, ysv_ext1, zsv_ext1, dx_ext1, dy_ext1, dz_ext1);
    }

    return value / m_norm3d;
}


float CustomNoise::Noise(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, float cellularJitter) {
    switch (NoiseType)
    {
        case ENoiseType::Simplex:
            return OpenSimplexNoise(position);
            break;
        case ENoiseType::Cellular:
            return CellularNoise(position, CellularDistanceType, CellularType);
            break;
        default:
            return 0;
    }
}

float CustomNoise::Noise_01(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, float cellularJitter) {
    return Noise(position, NoiseType, CellularDistanceType, CellularType, cellularJitter) / 2.0 + 0.5;
}

float CustomNoise::Ridge(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, float cellularJitter) {
    return 2 * (0.5 - abs(0.5 - Noise_01(position, NoiseType, CellularDistanceType, CellularType, cellularJitter)));
}

float CustomNoise::Fractal(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, float cellularJitter, int octave, float lacunarity, float persistence) {
    float noise = 0;
    float intensity = 1;
    float scale = 1;
    float noiseRemap = 0;
    for (int i = 0; i < octave; i++) {
        noise += (intensity * Noise_01(position * scale, NoiseType, CellularDistanceType, CellularType, cellularJitter));
        noiseRemap += intensity;
        intensity *= persistence;
        scale *= lacunarity;
    }
    return noise / noiseRemap;
}

float CustomNoise::FractalRidge(FVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, float cellularJitter, int octave, float lacunarity, float persistence) {
    {
        float noise = 0;
        float intensity = 1;
        float scale = 1;
        float MaxNoise = 0;
        for (int i = 0; i < octave; i++) {

            if (i > 0)
                noise += (intensity * Ridge(position * scale, NoiseType, CellularDistanceType, CellularType, cellularJitter)) * noise;
            else
                noise += (intensity * Ridge(position * scale, NoiseType, CellularDistanceType, CellularType, cellularJitter));
            MaxNoise += intensity;
            intensity *= persistence;
            scale *= lacunarity;
        }
        return noise / MaxNoise;
    }
}


double CustomNoise::Noise(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, double cellularJitter) {
    switch (NoiseType)
    {
    case ENoiseType::Simplex:
        return OpenSimplexNoise(position);
        break;
    case ENoiseType::Cellular:
        return CellularNoise(position, CellularDistanceType, CellularType);
        break;
    default:
        return 0;
    }
}

double CustomNoise::Noise_01(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, double cellularJitter) {
    return Noise(position, NoiseType, CellularDistanceType, CellularType, cellularJitter) / 2.0 + 0.5;
}

double CustomNoise::Ridge(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, double cellularJitter) {
    return 2 * (0.5 - abs(0.5 - Noise_01(position, NoiseType, CellularDistanceType, CellularType, cellularJitter)));
}

double CustomNoise::Fractal(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, double cellularJitter, int octave, double lacunarity, double persistence) {
    double noise = 0;
    double intensity = 1;
    double scale = 1;
    double noiseRemap = 0;
    for (int i = 0; i < octave; i++) {
        noise += (intensity * Noise_01(position * scale, NoiseType, CellularDistanceType, CellularType, cellularJitter));
        noiseRemap += intensity;
        intensity *= persistence;
        scale *= lacunarity;
    }
    return noise / noiseRemap;
}

double CustomNoise::FractalRidge(DVector position, ENoiseType NoiseType, ECellularDistanceType CellularDistanceType, ECellularType CellularType, double cellularJitter, int octave, double lacunarity, double persistence) {
    {
        double noise = 0;
        double intensity = 1;
        double scale = 1;
        double MaxNoise = 0;
        for (int i = 0; i < octave; i++) {

            if (i > 0)
                noise += (intensity * Ridge(position * scale, NoiseType, CellularDistanceType, CellularType, cellularJitter)) * noise;
            else
                noise += (intensity * Ridge(position * scale, NoiseType, CellularDistanceType, CellularType, cellularJitter));
            MaxNoise += intensity;
            intensity *= persistence;
            scale *= lacunarity;
        }
        return noise / MaxNoise;
    }
}





double CustomNoise::extrapolate(int xsb, int ysb, int zsb, double dx, double dy, double dz) const
{
    int index = m_permGradIndex3d[(m_perm[(m_perm[xsb & 0xFF] + ysb) & 0xFF] + zsb) & 0xFF];
    return m_gradients3d[index] * dx
        + m_gradients3d[index + 1] * dy
        + m_gradients3d[index + 2] * dz;
}

CustomNoise::CustomNoise(int pSeed)    
{
    
    m_gradients3d = { -11,  4,  4,     -4,  11,  4,    -4,  4,  11,
                     11,  4,  4,      4,  11,  4,     4,  4,  11,
                    -11, -4,  4,     -4, -11,  4,    -4, -4,  11,
                     11, -4,  4,      4, -11,  4,     4, -4,  11,
                    -11,  4, -4,     -4,  11, -4,    -4,  4, -11,
                     11,  4, -4,      4,  11, -4,     4,  4, -11,
                    -11, -4, -4,     -4, -11, -4,    -4, -4, -11,
                     11, -4, -4,      4, -11, -4,     4, -4, -11, };
    m_permGradIndex3d = { 0 };
    m_perm = {0};
    SetSeed(pSeed);
}
#pragma endregion




