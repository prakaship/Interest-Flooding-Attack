
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/point-to-point-layout-module.h"
#include "ns3/ndnSIM-module.h"
#include "ns3/ndnSIM/helper/ndn-link-control-helper.hpp"


namespace ns3 {


int
main(int argc, char* argv[])
{


  string consumer1,producer1;
   int con,pro;
   clock_t cl=clock();

   cout<<"enter the number of consumers:"<<endl;
   cin>>con;

   int x[con];
   int node1[con];
   int node2[pro];
   float time[con];
   

  Config::SetDefault("ns3::PointToPointNetDevice::DataRate", StringValue("1Mbps"));
  Config::SetDefault("ns3::PointToPointChannel::Delay", StringValue("500ms"));
  Config::SetDefault("ns3::QueueBase::MaxPackets", UintegerValue(2));
              

  
  CommandLine cmd;
  cmd.Parse(argc, argv);

  
  NodeContainer nodes;
  nodes.Create(161);
  
  PointToPointHelper p2p;
  

p2p.Install(nodes.Get(1), nodes.Get(2));
p2p.Install(nodes.Get(2), nodes.Get(3));
p2p.Install(nodes.Get(3), nodes.Get(4));
p2p.Install(nodes.Get(4), nodes.Get(5));
p2p.Install(nodes.Get(5), nodes.Get(6));
p2p.Install(nodes.Get(6), nodes.Get(7));
p2p.Install(nodes.Get(7), nodes.Get(8));
p2p.Install(nodes.Get(8), nodes.Get(9));
p2p.Install(nodes.Get(9), nodes.Get(10));
p2p.Install(nodes.Get(10), nodes.Get(0));
p2p.Install(nodes.Get(11), nodes.Get(12));
p2p.Install(nodes.Get(12), nodes.Get(13));
p2p.Install(nodes.Get(13), nodes.Get(14));
p2p.Install(nodes.Get(14), nodes.Get(15));
p2p.Install(nodes.Get(15), nodes.Get(16));
p2p.Install(nodes.Get(16), nodes.Get(17));
p2p.Install(nodes.Get(17), nodes.Get(18));
p2p.Install(nodes.Get(18), nodes.Get(19));
p2p.Install(nodes.Get(19), nodes.Get(20));
p2p.Install(nodes.Get(20), nodes.Get(0));

p2p.Install(nodes.Get(21), nodes.Get(22));
p2p.Install(nodes.Get(22), nodes.Get(23));
p2p.Install(nodes.Get(23), nodes.Get(24));
p2p.Install(nodes.Get(24), nodes.Get(25));
p2p.Install(nodes.Get(25), nodes.Get(26));
p2p.Install(nodes.Get(26), nodes.Get(27));
p2p.Install(nodes.Get(27), nodes.Get(28));
p2p.Install(nodes.Get(28), nodes.Get(29));
p2p.Install(nodes.Get(29), nodes.Get(30));
p2p.Install(nodes.Get(30), nodes.Get(0));
p2p.Install(nodes.Get(31), nodes.Get(32));
p2p.Install(nodes.Get(32), nodes.Get(33));
p2p.Install(nodes.Get(33), nodes.Get(34));
p2p.Install(nodes.Get(34), nodes.Get(35));
p2p.Install(nodes.Get(35), nodes.Get(36));
p2p.Install(nodes.Get(36), nodes.Get(37));
p2p.Install(nodes.Get(37), nodes.Get(38));
p2p.Install(nodes.Get(38), nodes.Get(39));
p2p.Install(nodes.Get(39), nodes.Get(40));
p2p.Install(nodes.Get(40), nodes.Get(0));


p2p.Install(nodes.Get(41), nodes.Get(42));
p2p.Install(nodes.Get(42), nodes.Get(43));
p2p.Install(nodes.Get(43), nodes.Get(44));
p2p.Install(nodes.Get(44), nodes.Get(45));
p2p.Install(nodes.Get(45), nodes.Get(46));
p2p.Install(nodes.Get(46), nodes.Get(47));
p2p.Install(nodes.Get(47), nodes.Get(48));
p2p.Install(nodes.Get(48), nodes.Get(49));
p2p.Install(nodes.Get(49), nodes.Get(50));
p2p.Install(nodes.Get(50), nodes.Get(0));
p2p.Install(nodes.Get(51), nodes.Get(52));
p2p.Install(nodes.Get(52), nodes.Get(53));
p2p.Install(nodes.Get(53), nodes.Get(54));
p2p.Install(nodes.Get(54), nodes.Get(55));
p2p.Install(nodes.Get(55), nodes.Get(56));
p2p.Install(nodes.Get(56), nodes.Get(57));
p2p.Install(nodes.Get(57), nodes.Get(58));
p2p.Install(nodes.Get(58), nodes.Get(59));
p2p.Install(nodes.Get(59), nodes.Get(60));
p2p.Install(nodes.Get(60), nodes.Get(0));






p2p.Install(nodes.Get(61), nodes.Get(62));
p2p.Install(nodes.Get(62), nodes.Get(63));
p2p.Install(nodes.Get(63), nodes.Get(64));
p2p.Install(nodes.Get(64), nodes.Get(65));
p2p.Install(nodes.Get(65), nodes.Get(66));
p2p.Install(nodes.Get(66), nodes.Get(67));
p2p.Install(nodes.Get(67), nodes.Get(68));
p2p.Install(nodes.Get(68), nodes.Get(69));
p2p.Install(nodes.Get(69), nodes.Get(70));
p2p.Install(nodes.Get(70), nodes.Get(60));
p2p.Install(nodes.Get(71), nodes.Get(72));
p2p.Install(nodes.Get(72), nodes.Get(73));
p2p.Install(nodes.Get(73), nodes.Get(74));
p2p.Install(nodes.Get(74), nodes.Get(75));
p2p.Install(nodes.Get(75), nodes.Get(76));
p2p.Install(nodes.Get(76), nodes.Get(77));
p2p.Install(nodes.Get(77), nodes.Get(78));
p2p.Install(nodes.Get(78), nodes.Get(79));
p2p.Install(nodes.Get(79), nodes.Get(80));
p2p.Install(nodes.Get(80), nodes.Get(60));

p2p.Install(nodes.Get(81), nodes.Get(82));
p2p.Install(nodes.Get(82), nodes.Get(83));
p2p.Install(nodes.Get(83), nodes.Get(84));
p2p.Install(nodes.Get(84), nodes.Get(85));
p2p.Install(nodes.Get(85), nodes.Get(86));
p2p.Install(nodes.Get(86), nodes.Get(87));
p2p.Install(nodes.Get(87), nodes.Get(88));
p2p.Install(nodes.Get(88), nodes.Get(89));
p2p.Install(nodes.Get(89), nodes.Get(90));
p2p.Install(nodes.Get(90), nodes.Get(60));
p2p.Install(nodes.Get(91), nodes.Get(92));
p2p.Install(nodes.Get(92), nodes.Get(93));
p2p.Install(nodes.Get(93), nodes.Get(94));
p2p.Install(nodes.Get(94), nodes.Get(95));
p2p.Install(nodes.Get(95), nodes.Get(96));
p2p.Install(nodes.Get(96), nodes.Get(97));
p2p.Install(nodes.Get(97), nodes.Get(98));
p2p.Install(nodes.Get(98), nodes.Get(99));
p2p.Install(nodes.Get(99), nodes.Get(100));
p2p.Install(nodes.Get(100), nodes.Get(60));


p2p.Install(nodes.Get(101), nodes.Get(102));
p2p.Install(nodes.Get(102), nodes.Get(103));
p2p.Install(nodes.Get(103), nodes.Get(104));
p2p.Install(nodes.Get(104), nodes.Get(105));
p2p.Install(nodes.Get(105), nodes.Get(106));
p2p.Install(nodes.Get(106), nodes.Get(107));
p2p.Install(nodes.Get(107), nodes.Get(108));
p2p.Install(nodes.Get(108), nodes.Get(109));
p2p.Install(nodes.Get(109), nodes.Get(110));
p2p.Install(nodes.Get(110), nodes.Get(60));
p2p.Install(nodes.Get(111), nodes.Get(112));
p2p.Install(nodes.Get(112), nodes.Get(113));
p2p.Install(nodes.Get(113), nodes.Get(114));
p2p.Install(nodes.Get(114), nodes.Get(115));
p2p.Install(nodes.Get(115), nodes.Get(116));
p2p.Install(nodes.Get(116), nodes.Get(117));
p2p.Install(nodes.Get(117), nodes.Get(118));
p2p.Install(nodes.Get(118), nodes.Get(119));
p2p.Install(nodes.Get(119), nodes.Get(120));
p2p.Install(nodes.Get(120), nodes.Get(60));


p2p.Install(nodes.Get(121), nodes.Get(122));
p2p.Install(nodes.Get(122), nodes.Get(123));
p2p.Install(nodes.Get(123), nodes.Get(124));
p2p.Install(nodes.Get(124), nodes.Get(125));
p2p.Install(nodes.Get(125), nodes.Get(126));
p2p.Install(nodes.Get(126), nodes.Get(127));
p2p.Install(nodes.Get(127), nodes.Get(128));
p2p.Install(nodes.Get(128), nodes.Get(129));
p2p.Install(nodes.Get(129), nodes.Get(130));
p2p.Install(nodes.Get(130), nodes.Get(0));
p2p.Install(nodes.Get(131), nodes.Get(132));
p2p.Install(nodes.Get(132), nodes.Get(133));
p2p.Install(nodes.Get(133), nodes.Get(134));
p2p.Install(nodes.Get(134), nodes.Get(135));
p2p.Install(nodes.Get(135), nodes.Get(136));
p2p.Install(nodes.Get(136), nodes.Get(137));
p2p.Install(nodes.Get(137), nodes.Get(138));
p2p.Install(nodes.Get(138), nodes.Get(139));
p2p.Install(nodes.Get(139), nodes.Get(140));
p2p.Install(nodes.Get(140), nodes.Get(0));

p2p.Install(nodes.Get(141), nodes.Get(142));
p2p.Install(nodes.Get(142), nodes.Get(143));
p2p.Install(nodes.Get(143), nodes.Get(144));
p2p.Install(nodes.Get(144), nodes.Get(145));
p2p.Install(nodes.Get(145), nodes.Get(146));
p2p.Install(nodes.Get(146), nodes.Get(147));
p2p.Install(nodes.Get(147), nodes.Get(148));
p2p.Install(nodes.Get(148), nodes.Get(149));
p2p.Install(nodes.Get(149), nodes.Get(150));
p2p.Install(nodes.Get(150), nodes.Get(0));
p2p.Install(nodes.Get(151), nodes.Get(152));
p2p.Install(nodes.Get(152), nodes.Get(153));
p2p.Install(nodes.Get(153), nodes.Get(154));
p2p.Install(nodes.Get(154), nodes.Get(155));
p2p.Install(nodes.Get(155), nodes.Get(156));
p2p.Install(nodes.Get(156), nodes.Get(157));
p2p.Install(nodes.Get(157), nodes.Get(158));
p2p.Install(nodes.Get(158), nodes.Get(159));
p2p.Install(nodes.Get(159), nodes.Get(160));
p2p.Install(nodes.Get(160), nodes.Get(0));

/*p2p.Install(nodes.Get(161), nodes.Get(162));
p2p.Install(nodes.Get(162), nodes.Get(163));
p2p.Install(nodes.Get(163), nodes.Get(164));
p2p.Install(nodes.Get(164), nodes.Get(165));
p2p.Install(nodes.Get(165), nodes.Get(166));
p2p.Install(nodes.Get(166), nodes.Get(167));
p2p.Install(nodes.Get(167), nodes.Get(168));
p2p.Install(nodes.Get(168), nodes.Get(169));
p2p.Install(nodes.Get(169), nodes.Get(160));
p2p.Install(nodes.Get(170), nodes.Get(0));
p2p.Install(nodes.Get(171), nodes.Get(172));
p2p.Install(nodes.Get(172), nodes.Get(173));
p2p.Install(nodes.Get(173), nodes.Get(174));
p2p.Install(nodes.Get(174), nodes.Get(175));
p2p.Install(nodes.Get(175), nodes.Get(176));
p2p.Install(nodes.Get(176), nodes.Get(177));
p2p.Install(nodes.Get(177), nodes.Get(178));
p2p.Install(nodes.Get(178), nodes.Get(179));
p2p.Install(nodes.Get(179), nodes.Get(180));
p2p.Install(nodes.Get(180), nodes.Get(0));


p2p.Install(nodes.Get(181), nodes.Get(182));
p2p.Install(nodes.Get(182), nodes.Get(183));
p2p.Install(nodes.Get(183), nodes.Get(184));
p2p.Install(nodes.Get(184), nodes.Get(185));
p2p.Install(nodes.Get(185), nodes.Get(186));
p2p.Install(nodes.Get(186), nodes.Get(187));
p2p.Install(nodes.Get(187), nodes.Get(188));
p2p.Install(nodes.Get(188), nodes.Get(189));
p2p.Install(nodes.Get(189), nodes.Get(190));
p2p.Install(nodes.Get(190), nodes.Get(0));
p2p.Install(nodes.Get(191), nodes.Get(192));
p2p.Install(nodes.Get(192), nodes.Get(193));
p2p.Install(nodes.Get(193), nodes.Get(194));
p2p.Install(nodes.Get(194), nodes.Get(195));
p2p.Install(nodes.Get(195), nodes.Get(196));
p2p.Install(nodes.Get(196), nodes.Get(197));
p2p.Install(nodes.Get(197), nodes.Get(198));
p2p.Install(nodes.Get(198), nodes.Get(199));
p2p.Install(nodes.Get(199), nodes.Get(200));
p2p.Install(nodes.Get(200), nodes.Get(0));


p2p.Install(nodes.Get(201), nodes.Get(202));
p2p.Install(nodes.Get(202), nodes.Get(203));
p2p.Install(nodes.Get(203), nodes.Get(204));
p2p.Install(nodes.Get(204), nodes.Get(205));
p2p.Install(nodes.Get(205), nodes.Get(206));
p2p.Install(nodes.Get(206), nodes.Get(207));
p2p.Install(nodes.Get(207), nodes.Get(208));
p2p.Install(nodes.Get(208), nodes.Get(209));
p2p.Install(nodes.Get(209), nodes.Get(210));
p2p.Install(nodes.Get(210), nodes.Get(0));
p2p.Install(nodes.Get(211), nodes.Get(212));
p2p.Install(nodes.Get(212), nodes.Get(213));
p2p.Install(nodes.Get(213), nodes.Get(214));
p2p.Install(nodes.Get(214), nodes.Get(215));
p2p.Install(nodes.Get(215), nodes.Get(216));
p2p.Install(nodes.Get(216), nodes.Get(217));
p2p.Install(nodes.Get(217), nodes.Get(218));
p2p.Install(nodes.Get(218), nodes.Get(219));
p2p.Install(nodes.Get(219), nodes.Get(220));
p2p.Install(nodes.Get(220), nodes.Get(0));

p2p.Install(nodes.Get(221), nodes.Get(222));
p2p.Install(nodes.Get(222), nodes.Get(223));
p2p.Install(nodes.Get(223), nodes.Get(224));
p2p.Install(nodes.Get(224), nodes.Get(225));
p2p.Install(nodes.Get(225), nodes.Get(226));
p2p.Install(nodes.Get(226), nodes.Get(227));
p2p.Install(nodes.Get(227), nodes.Get(228));
p2p.Install(nodes.Get(228), nodes.Get(229));
p2p.Install(nodes.Get(229), nodes.Get(230));
p2p.Install(nodes.Get(230), nodes.Get(0));
p2p.Install(nodes.Get(231), nodes.Get(232));
p2p.Install(nodes.Get(232), nodes.Get(233));
p2p.Install(nodes.Get(233), nodes.Get(234));
p2p.Install(nodes.Get(234), nodes.Get(235));
p2p.Install(nodes.Get(235), nodes.Get(236));
p2p.Install(nodes.Get(236), nodes.Get(237));
p2p.Install(nodes.Get(237), nodes.Get(238));
p2p.Install(nodes.Get(238), nodes.Get(239));
p2p.Install(nodes.Get(239), nodes.Get(240));
p2p.Install(nodes.Get(240), nodes.Get(0));*/



















  
  
  ndn::StackHelper ndnHelper;
  ndnHelper.SetDefaultRoutes(true);
  ndnHelper.InstallAll();

  
  ndn::StrategyChoiceHelper::InstallAll("/prefix", "/localhost/nfd/strategy/multicast");
 // ndn::L3RateTracer::InstallAll("rate-trace.txt", Seconds(.5));

 
  
  ndn::GlobalRoutingHelper ndnGlobalRoutingHelper;
  ndnGlobalRoutingHelper.InstallAll();


  // Consumer
  ndn::AppHelper consumerHelper("ns3::ndn::ConsumerCbr");
  
  consumerHelper.SetPrefix("/prefix");
  


  for(int i=0;i<con;i++)
  {
    cout<<"string value for consumer"<<i+1<<":"<<endl;
    cin>>consumer1;

     cout<<"node number:"<<endl;
     cin>>node1[i];

     stringstream a1(consumer1);
     a1>> x[i];
  
    consumerHelper.SetAttribute("Frequency", StringValue(consumer1)); 
    consumerHelper.Install(nodes.Get(node1[i]));
   } 




   cout<<"enter the number of producers:"<<endl;
   cin>>pro;
  // Producer
  ndn::AppHelper producerHelper("ns3::ndn::Producer");
  
  producerHelper.SetPrefix("/prefix");
  
  for(int i=0;i<pro;i++)
  {
    cout<<"payload size for producer"<<i+1<<":"<<endl;
    cin>>producer1;

     cout<<"node number:"<<endl;
     cin>>node2[i];
  
    producerHelper.SetAttribute("PayloadSize", StringValue(producer1));
    producerHelper.Install(nodes.Get(node2[i])); 

  } 
  
  


  

 
 for(int i=0;i<con;i++)
{clock_t cl=clock();

  if(node1[i]%10==1)
  {cl = clock() - cl;
   time[i]=cl;
   cout<<time[i]<<endl;
   printf (" (%f seconds).\n",((float)cl)/CLOCKS_PER_SEC);  
        if(x[i]>500 && time[i]>2.0)
        {
  	Simulator::Schedule(Seconds(0.0), ndn::LinkControlHelper::FailLink, nodes.Get(node1[i]), nodes.Get(node1[i]+1));
 	Simulator::Schedule(Seconds(4.0), ndn::LinkControlHelper::UpLink, nodes.Get(node1[i]), nodes.Get(node1[i]+1)); 
        }
  cl=0;
  }

  else
  {cl = clock() - cl;
   time[i]=cl;
   cout<<time[i]<<endl;
   printf (" (%f seconds).\n",((float)cl)/CLOCKS_PER_SEC);  
        if(x[i]>500 && time[i]>2.0)
        {
   	Simulator::Schedule(Seconds(0.0), ndn::LinkControlHelper::FailLink, nodes.Get(node1[i]), nodes.Get(node1[i]+1));
 	Simulator::Schedule(Seconds(4.0), ndn::LinkControlHelper::UpLink, nodes.Get(node1[i]), nodes.Get(node1[i]+1));

        Simulator::Schedule(Seconds(0.0), ndn::LinkControlHelper::FailLink, nodes.Get(node1[i]), nodes.Get(node1[i]-1));
 	Simulator::Schedule(Seconds(4.0), ndn::LinkControlHelper::UpLink, nodes.Get(node1[i]), nodes.Get(node1[i]-1));
        }
  cl=0;
  }
}



 
 
//Rscript src/ndnSIM/examples/graphs/drop-graph.R



   
  
 

  
  Simulator::Stop(Seconds(20.0));
  L2RateTracer::InstallAll("drop-trace.txt", Seconds(0.5));
  ndn::L3RateTracer::InstallAll("rate-trace.txt", Seconds(2.0));
  ndn::AppDelayTracer::InstallAll("app-delays-trace.tr");


  Simulator::Run();
  Simulator::Destroy();
  return 0;
}

} 

int
main(int argc, char* argv[])
{
  return ns3::main(argc, argv);
}
