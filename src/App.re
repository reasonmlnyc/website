
module App = {
  /* Include the JS interop so we can pass props from JS */
  include ReactRe.Component.JsProps;
  let name = "App";
  type event = Js.t {. id: string, title: string, description: string, time: float, link: string};
  type props = {events: array event};
  let render {props} => {
    let events =
      props.events |>
        Array.map (
          fun event => 
            <EventItem 
              key=event##id
              id=event##id
              title=event##title
              description=event##description
              link=event##link
              time=event##time
            />
          );
    <div className="App">
      <div className="App__header App__section"> 
          /*<ParticlesRe show=true />*/
          <svg className="App__logo" viewBox="0 0 1050 402" >
            <path d="M203.691,71.0391 C191.1816,81.3054 182.6814,95.6001 179.6643,111.444 C189.4152,143.7867 144.8553,135.3798 151.881,111.306 C152.538,106.3587 153.5592,101.4663 154.9371,96.6678 L147.4356,96.6678 C129.9351,96.6678 113.1516,89.7567 100.77675,77.4552 C88.40205,65.1534 81.45,48.4689 81.45,31.0719 L81.45,0 L112.7064,0 C128.7615,0.0525483 144.2439,5.93442 156.2424,16.53942 C168.2406,27.14445 175.9278,41.742 177.8586,57.5865 C186.9291,48.1275 197.8347,40.5951 209.9163,35.4444 C221.9982,30.2937 235.005,27.6318 248.1507,27.61935 L248.1507,55.2387 C231.9294,55.1832 216.2001,60.7731 203.691,71.0391 Z" id="path0_fill" fill="#4B3737" />
            <path d="M178.8975,111.44421 C205.6287,100.69473 235.5162,100.69473 262.2477,111.44421 L262.2477,111.72042 C275.8593,117.16539 288.2517,125.2359 298.7097,135.4662 C309.168,145.6968 317.484,157.8846 323.181,171.3267 C328.875,184.7685 331.836,199.1988 331.893,213.7845 C331.95,228.3699 329.1,242.8224 323.511,256.3077 L281.835,359.0517 C276.6096,371.7741 267.6846,382.6572 256.2018,390.3081 C244.719,397.959 231.2007,402.03 217.3773,402 C208.4688,401.9685 199.6494,400.2339 191.4,396.8904 L165.8394,386.6712 L140.1396,396.4761 C123.063,403.3428 103.9413,403.185 86.9817,396.0372 C70.0218,388.8894 56.613,375.3369 49.7046,358.3614 L8.02941,255.6174 C-0.0502407,235.6506 -2.08737,213.7725 2.168235,192.6705 C6.42384,171.5688 16.78689,152.1621 31.9845,136.8345 C47.1819,121.5066 66.552,110.9253 87.7155,106.3902 C108.879,101.855085 130.914,103.563701 151.1142,111.30612 C153.6549,115.40313 178.8975,118.46016 178.8975,111.44421 Z" id="path1_fill" fill="#CC5643" />
            <path d="M207.45,147.58863 L214.6737,174.24135 C225.33936,171.41457 236.69745,172.90953 246.2556,178.3983 C255.8136,183.8868 262.791,192.921 265.6563,203.5179 L292.6062,196.3368 C290.2377,187.5756 286.1556,179.3646 280.5936,172.1724 C275.0313,164.98026 268.098,158.94828 260.1897,154.4211 C252.2814,149.89392 243.5529,146.960319 234.50367,145.787976 C225.45435,144.61563 216.26133,145.2275 207.45,147.58863 Z M207.45,147.58863 L214.6737,174.24135 C225.33936,171.41457 236.69745,172.90953 246.2556,178.3983 C255.8136,183.8868 262.791,192.921 265.6563,203.5179 L292.6062,196.3368 C290.2377,187.5756 286.1556,179.3646 280.5936,172.1724 C275.0313,164.98026 268.098,158.94828 260.1897,154.4211 C252.2814,149.89392 243.5529,146.960319 234.50367,145.787976 C225.45435,144.61563 216.26133,145.2275 207.45,147.58863 Z M207.45,147.58863 L214.6737,174.24135 C225.33936,171.41457 236.69745,172.90953 246.2556,178.3983 C255.8136,183.8868 262.791,192.921 265.6563,203.5179 L292.6062,196.3368 C290.2377,187.5756 286.1556,179.3646 280.5936,172.1724 C275.0313,164.98026 268.098,158.94828 260.1897,154.4211 C252.2814,149.89392 243.5529,146.960319 234.50367,145.787976 C225.45435,144.61563 216.26133,145.2275 207.45,147.58863 Z M207.45,147.58863 L214.6737,174.24135 C225.33936,171.41457 236.69745,172.90953 246.2556,178.3983 C255.8136,183.8868 262.791,192.921 265.6563,203.5179 L292.6062,196.3368 C290.2377,187.5756 286.1556,179.3646 280.5936,172.1724 C275.0313,164.98026 268.098,158.94828 260.1897,154.4211 C252.2814,149.89392 243.5529,146.960319 234.50367,145.787976 C225.45435,144.61563 216.26133,145.2275 207.45,147.58863 Z M207.45,147.58863 L214.6737,174.24135 C225.33936,171.41457 236.69745,172.90953 246.2556,178.3983 C255.8136,183.8868 262.791,192.921 265.6563,203.5179 L292.6062,196.3368 C290.2377,187.5756 286.1556,179.3646 280.5936,172.1724 C275.0313,164.98026 268.098,158.94828 260.1897,154.4211 C252.2814,149.89392 243.5529,146.960319 234.50367,145.787976 C225.45435,144.61563 216.26133,145.2275 207.45,147.58863 Z" id="path2_fill" fill="#D67363" />
            <path d="M150.9051,69.0486 L147.4323,69.0486 C142.4154,69.0486 137.44776,68.0661 132.81285,66.1578 C128.17794,64.2492 123.96657,61.452 120.41916,57.9255 C116.87175,54.399 114.05781,50.2125 112.137966,45.60495 C110.218125,40.9974 109.23,36.05907 109.23,31.0719 L109.23,27.6195 L112.70292,27.6195 C122.83479,27.6195 132.55167,31.62057 139.716,38.74257 C146.8803,45.86457 150.9051,55.52409 150.9051,65.5962 L150.9051,69.0486 Z" id="path3_fill" fill="#219653" />
            <path d="M1035.282,275.7729 C1032.165,271.8321 1028.454,268.71582 1024.146,266.42454 C1019.838,264.04164 1015.575,262.85016 1011.357,262.85016 C1006.5,262.85016 1002.054,264.08745 998.019,266.56203 C994.08,268.94496 990.963,272.2902 988.671,276.5979 C986.379,280.8138 985.233,285.5337 985.233,290.7579 C985.233,295.9821 986.379,300.7479 988.671,305.0553 C990.963,309.2715 994.08,312.6165 998.019,315.0912 C1002.054,317.4741 1006.5,318.6657 1011.357,318.6657 C1015.299,318.6657 1019.424,317.6574 1023.732,315.6411 C1028.04,313.6248 1031.892,310.8753 1035.282,307.3926 L1049.994,323.2023 C1044.771,328.7013 1038.537,333.1005 1031.295,336.3999 C1024.146,339.6078 1017.042,341.2116 1009.983,341.2116 C1000.449,341.2116 991.833,339.012 984.132,334.6128 C976.434,330.2136 970.383,324.2106 965.982,316.6035 C961.584,308.9964 959.382,300.4728 959.382,291.0327 C959.382,281.6844 961.629,273.2526 966.12,265.73718 C970.611,258.22179 976.755,252.31032 984.546,248.00271 C992.43,243.695121 1001.229,241.541322 1010.946,241.541322 C1018.095,241.541322 1025.154,243.053571 1032.12,246.07803 C1039.086,249.01089 1044.999,253.04352 1049.856,258.17598 L1035.282,275.7729 Z" id="path10_fill" fill="#505050" />
            <polygon id="path9_fill" fill="#505050" points="960.336 243.053568 925.548 308.6298 925.548 339.4245 900.384 339.4245 900.384 309.3171 864.909 243.053568 890.073 243.053568 912.897 284.4339 935.172 243.053568" />
            <polygon id="path8_fill" fill="#505050" points="831.342 243.053568 854.718 243.053568 854.718 339.4245 832.716 339.4245 788.994 281.8218 788.994 339.4245 765.48 339.4245 765.48 243.053568 787.617 243.053568 831.48 301.0686" />
            <polygon id="path7_fill" fill="#505050" points="690.018 243.053568 713.394 243.053568 713.394 339.4245 691.395 339.4245 647.67 281.8218 647.67 339.4245 624.156 339.4245 624.156 243.053568 646.293 243.053568 690.156 301.0686" />
            <path d="M558.1971,241.541322 C568.0053,241.541322 576.8511,243.695121 584.7345,248.00271 C592.7094,252.31032 598.9428,258.22179 603.4344,265.73718 C608.019,273.2526 610.308,281.6844 610.308,291.0327 C610.308,300.4728 608.019,308.9964 603.4344,316.6035 C598.9428,324.2106 592.7094,330.2136 584.7345,334.6128 C576.8511,339.012 568.0053,341.2116 558.1971,341.2116 C548.3889,341.2116 539.4972,339.0579 531.5223,334.7502 C523.6392,330.351 517.4058,324.348 512.8224,316.7409 C508.3308,309.0423 506.085,300.4728 506.085,291.0327 C506.085,281.6844 508.3308,273.2526 512.8224,265.73718 C517.4058,258.22179 523.6392,252.31032 531.5223,248.00271 C539.4972,243.695121 548.3889,241.541322 558.1971,241.541322 Z M558.4722,262.85016 C553.7055,262.85016 549.2598,264.08745 545.1348,266.56203 C541.1013,269.03661 537.8931,272.4735 535.5099,276.8727 C533.1264,281.1804 531.9348,285.9462 531.9348,291.1704 C531.9348,296.4861 533.1264,301.3437 535.5099,305.7429 C537.9849,310.0503 541.239,313.4874 545.2722,316.0536 C549.3054,318.528 553.7055,319.7655 558.4722,319.7655 C563.2389,319.7655 567.5928,318.528 571.5345,316.0536 C575.568,313.4874 578.7303,310.0503 581.022,305.7429 C583.3137,301.3437 584.4594,296.4861 584.4594,291.1704 C584.4594,285.9462 583.3137,281.1804 581.022,276.8727 C578.7303,272.4735 575.568,269.03661 571.5345,266.56203 C567.5928,264.08745 563.2389,262.85016 558.4722,262.85016 Z" id="path6_fill" fill="#505050" />
            <path d="M488.4186,272.061 C483.2853,269.03661 477.7854,266.56203 471.9186,264.63735 C466.1436,262.7127 461.2854,261.75036 457.3437,261.75036 C454.227,261.75036 451.752,262.3461 449.9187,263.53755 C448.1772,264.63735 447.3063,266.28708 447.3063,268.48671 C447.3063,270.59466 448.0854,272.382 449.6439,273.8484 C451.2021,275.223 453.1272,276.3687 455.4189,277.2852 C457.7103,278.1099 461.1021,279.21 465.5937,280.5846 C472.2852,282.5094 477.7854,284.4339 482.0937,286.3587 C486.4935,288.2832 490.2519,291.2619 493.3686,295.2945 C496.4853,299.2356 498.0435,304.4139 498.0435,310.8294 C498.0435,317.2449 496.3476,322.7442 492.9561,327.3267 C489.5643,331.8174 484.8894,335.2086 478.9311,337.5 C473.0646,339.7911 466.5105,340.9368 459.2688,340.9368 C451.2939,340.9368 443.319,339.5619 435.3438,336.8124 C427.4607,333.9714 420.6315,330.1221 414.8565,325.2645 L424.6191,305.6052 C429.4773,309.9129 435.2064,313.4415 441.8064,316.191 C448.4979,318.9405 454.4103,320.3154 459.5436,320.3154 C463.302,320.3154 466.2354,319.6278 468.3438,318.2532 C470.5437,316.8783 471.6438,314.862 471.6438,312.2043 C471.6438,310.0047 470.8188,308.1717 469.1688,306.705 C467.6103,305.2386 465.5937,304.0932 463.1187,303.2682 C460.7355,302.3517 457.3437,301.2978 452.9439,300.1062 C446.3439,298.2732 440.8896,296.4402 436.5813,294.6072 C432.273,292.6824 428.5605,289.8414 425.4441,286.0836 C422.4189,282.2343 420.9066,277.1478 420.9066,270.8238 C420.9066,264.86649 422.4648,259.64238 425.5815,255.1515 C428.7897,250.66059 433.2813,247.22367 439.0563,244.84077 C444.9231,242.36619 451.7064,241.1289 459.4062,241.1289 C466.3728,241.1289 473.2479,242.13705 480.0312,244.15338 C486.8145,246.07803 492.7728,248.6901 497.9061,251.98953 L488.4186,272.061 Z" id="path5_fill" fill="#505050" />
            <path d="M385.4994,339.4245 L378.8994,322.3773 L337.2372,322.3773 L330.49983,339.4245 L304.65,339.4245 L346.0371,243.053568 L371.8869,243.053568 L412.3116,339.4245 L385.4994,339.4245 Z M344.7996,303.1308 L371.4744,303.1308 L358.2747,268.76166 L344.7996,303.1308 Z" id="path4_fill" fill="#505050" />
            <polygon id="path12_fill" fill="#FFFFFF" points="202.3881 243.7182 277.9008 243.7182 277.9008 263.65134 227.3769 263.65134 227.3769 281.5365 272.9847 281.5365 272.9847 301.3332 227.3769 301.4697 227.3769 319.4913 279.2661 319.4913 279.2661 339.4245 202.3881 339.4245" />
            <path d="M159.6978,339.4245 L145.7697,312.9381 L145.2234,312.9381 L127.1988,312.9381 L127.1988,339.4245 L102.21,339.4245 L102.21,243.7182 L145.2234,243.7182 C157.8771,243.7182 167.6634,246.676311 174.582,252.59253 C181.5915,258.41775 185.0964,266.65494 185.0964,277.3041 C185.0964,284.4945 183.6399,290.7294 180.7266,296.0085 C177.8136,301.1967 173.5806,305.247 168.0276,308.1597 L187.9638,339.4245 L159.6978,339.4245 Z M127.1988,293.0049 L145.3599,293.0049 C150.4578,293.0049 154.3725,291.7308 157.1034,289.182 C159.9255,286.6335 161.3364,282.9474 161.3364,278.1234 C161.3364,273.48138 159.9255,269.93163 157.1034,267.47412 C154.3725,264.92559 150.4578,263.65134 145.3599,263.65134 L127.1988,263.65134 L127.1988,293.0049 Z" id="path11_fill" fill="#FFFFFF" /> 
          </svg>
          <h2 className="App__subtitle">
            (ReactRe.stringToElement "NYC's ReasonML Meetup")
          </h2>
      </div>
      <Wrapper width="lg">
        <div className="App__cta App__section">
          <h2>(ReactRe.stringToElement "Join us at our monthly meetup")</h2>
          <p className="App__intro lead">
            <a href="https://facebook.github.io/reason" target="_blank" rel="noopener">(ReactRe.stringToElement "ReasonML")</a>
            (ReactRe.stringToElement " is having a huge impact on the way we think about and build applications. Our meetups are an opportunity to learn why and share experiences. We are a sociable group and very welcoming to newcomers.")
          </p>
          <div className="ButtonGroup">
            <a
              className="Button Button--primary" 
              href="https://www.meetup.com/ReasonML-NYC/"
              rel="noopener"
              target="_blank"
            > 
              (ReactRe.stringToElement "Join Reason NYC")
            </a>
            <a
              className="Button Button--secondary" 
              href="mailto:jared@palmer.net?subject=ReasonMLNYC - Speaker Request"
              target="_blank"
              rel="noopener"
            > 
              (ReactRe.stringToElement "Become a speaker")
            </a>
          </div>
        </div>
      </Wrapper>
      <div className="App__events">
        <Wrapper width="lg">
          <h2>(ReactRe.stringToElement "Upcoming Events")</h2>
          <ul className="App__events-list">(ReactRe.arrayToElement events)</ul>
        </Wrapper>
      </div>
      <div className="App__sponsors App__section">
        <Wrapper width="sm">
            (ReactRe.stringToElement "Proudly sponsored by")
        </Wrapper>
        <Wrapper width="sm">
            <svg width="96px" height="120px" viewBox="0 0 1163 1442">
                <g id="Final" stroke="none" strokeWidth="1" fill="none" fillRule="evenodd">
                    <g id="light_lockup" transform="translate(-440.000000, -291.000000)">
                        <g id="Group" transform="translate(440.000000, 320.000000)">
                            <path d="M0,1412.04553 L0,1250.53804 L65.835428,1250.53804 C75.4973309,1250.53804 84.1292504,1251.88955 91.7314453,1254.59262 C99.3336403,1257.29569 105.774812,1261.1062 111.055155,1266.02429 C116.335497,1270.94237 120.398678,1276.8177 123.24482,1283.65045 C126.090962,1290.48321 127.514012,1298.0667 127.514012,1306.40116 L127.514012,1306.85167 C127.514012,1316.23732 125.828821,1324.45903 122.45839,1331.51704 C119.087959,1338.57505 114.444323,1344.48792 108.527344,1349.25583 C102.610364,1354.02374 95.701084,1357.60901 87.7992952,1360.01174 C79.8975063,1362.41446 71.4153816,1363.61581 62.3526664,1363.61581 L35.3893512,1363.61581 L35.3893512,1412.04553 L0,1412.04553 Z M35.3893512,1331.96755 L63.4761379,1331.96755 C72.3890561,1331.96755 79.2983365,1329.62117 84.2041865,1324.92834 C89.1100364,1320.23552 91.5629246,1314.43527 91.5629246,1307.52743 L91.5629246,1307.07692 C91.5629246,1299.11789 88.9976904,1293.05485 83.867145,1288.88762 C78.7365997,1284.72039 71.7149732,1282.63681 62.802055,1282.63681 L35.3893512,1282.63681 L35.3893512,1331.96755 Z M178.220024,1412.04553 L247.313519,1249.41176 L279.894192,1249.41176 L348.987687,1412.04553 L311.913128,1412.04553 L297.195652,1375.77955 L229.113281,1375.77955 L214.395805,1412.04553 L178.220024,1412.04553 Z M241.696162,1344.46917 L284.500425,1344.46917 L263.154467,1292.0975 L241.696162,1344.46917 Z M412.051885,1412.04553 L412.051885,1250.53804 L447.441236,1250.53804 L447.441236,1379.72151 L527.769446,1379.72151 L527.769446,1412.04553 L412.051885,1412.04553 Z M592.743546,1412.04553 L592.743546,1250.53804 L630.941576,1250.53804 L673.29645,1318.90279 L715.651325,1250.53804 L753.849355,1250.53804 L753.849355,1412.04553 L718.572351,1412.04553 L718.572351,1306.62641 L673.29645,1375.5543 L672.397673,1375.5543 L627.458815,1307.30218 L627.458815,1412.04553 L592.743546,1412.04553 Z M830.732252,1412.04553 L830.732252,1250.53804 L952.179518,1250.53804 L952.179518,1282.1863 L865.896909,1282.1863 L865.896909,1314.96083 L941.84358,1314.96083 L941.84358,1346.49646 L865.896909,1346.49646 L865.896909,1380.39727 L953.415336,1380.39727 L953.415336,1412.04553 L830.732252,1412.04553 Z M1023.22036,1412.04553 L1023.22036,1250.53804 L1096.80774,1250.53804 C1117.18013,1250.53804 1132.83367,1256.01918 1143.76885,1266.98162 C1152.98136,1276.2171 1157.58755,1288.49335 1157.58755,1303.81073 L1157.58755,1304.37387 C1157.58755,1317.4387 1154.40441,1328.08187 1148.03804,1336.3037 C1141.67167,1344.52553 1133.35807,1350.55103 1123.09698,1354.38037 L1162.41848,1412.04553 L1120.96238,1412.04553 L1086.47181,1360.34962 L1086.02242,1360.34962 L1058.60971,1360.34962 L1058.60971,1412.04553 L1023.22036,1412.04553 Z M1058.60971,1329.03924 L1094.5608,1329.03924 C1103.32392,1329.03924 1110.04596,1326.95566 1114.72711,1322.78843 C1119.40827,1318.6212 1121.74881,1313.08374 1121.74881,1306.1759 L1121.74881,1305.7254 C1121.74881,1298.0667 1119.29592,1292.304 1114.39007,1288.43711 C1109.48422,1284.57022 1102.64984,1282.63681 1093.88672,1282.63681 L1058.60971,1282.63681 L1058.60971,1329.03924 Z" id="PALMER" fill="#09091A"/>
                            <path d="M575.351448,442.521827 C575.351448,442.521827 645.58302,442.457963 692.888064,403.326902 C716.909241,383.456417 735.018725,353.512304 735.018725,308.387605 C735.018725,273.700026 724.317699,247.992496 708.45629,228.940227 C663.049232,174.398574 601.885388,175.680679 575.351448,174.398574 C548.817508,173.116469 428.811691,174.398574 428.811691,174.398574 L428.811691,442.690857 L236.478261,442.521827 L236.478261,0 L594.2795,0 C646.789842,0 693.702448,7.34468717 735.018725,22.0342818 C776.335001,36.7238765 811.341371,57.431814 840.038883,84.1587154 C868.736396,110.885617 890.818902,142.814604 906.287065,179.946635 C921.755228,217.078666 929.489193,258.290522 929.489193,303.583439 C929.489193,357.037229 920.33055,401.71741 902.012989,440.073574 C883.695428,478.429737 858.458278,510.562744 826.300781,536.473557 C794.143285,562.384369 756.592848,581.868192 713.648343,594.92561 C670.703839,607.983027 624.605335,614.511638 575.351448,614.511638 L428.811691,614.511638 L428.192968,981.399379 L236.478261,851.796998 L236.478261,614.511638 L428.192968,614.511638 L428.192968,442.690857 L575.351448,442.521827 Z" id="P" stroke="#09091A" strokeWidth="57.6"/>
                        </g>
                    </g>
                </g>
            </svg>
        </Wrapper>
      </div>
      <div className="App__footer App__section">
        <Wrapper width="sm">
          <a href="https://github.com/reasonmlnyc" target="_blank" rel="noopener">(ReactRe.stringToElement "GitHub")</a> (ReactRe.stringToElement " | ") 
          <a href="https://twitter.com/NYCReasonML" target="_blank" rel="noopener">(ReactRe.stringToElement "Twitter")</a>  (ReactRe.stringToElement " | ")
          <a href="https://www.meetup.com/ReasonML-NYC/" target="_blank" rel="noopener">(ReactRe.stringToElement "Meetup")</a>  (ReactRe.stringToElement " | ")
          <a href="mailto:jared@palmer.net" target="_blank" rel="noopener">(ReactRe.stringToElement "Contact")</a>
        </Wrapper>
        <div>
          <small>(ReactRe.stringToElement "Copyright 2017 ")<a href="https://www.shellypalmer.com" target="_blank" rel="noopener">(ReactRe.stringToElement "The Palmer Group.")</a>(ReactRe.stringToElement " All Rights Reserved.")</small>
        </div>
      </div>
    </div>;
  };
    /* Tell Reason-React how to transform JS props into ReasonML */
  type jsProps = Js.t {. events: array event};
  let jsPropsToReasonProps =
    Some (
      fun jsProps => {
       events: jsProps##events
      }
    );
};

include ReactRe.CreateComponent App;

let createElement ::events => wrapProps { events: events };
