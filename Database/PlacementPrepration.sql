-- phpMyAdmin SQL Dump
-- version 4.6.4
-- https://www.phpmyadmin.net/
--
-- Host: fdb30.awardspace.net
-- Generation Time: Dec 12, 2020 at 03:13 PM
-- Server version: 5.7.20-log
-- PHP Version: 5.5.38

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `3532067_data`
--

-- --------------------------------------------------------

--
-- Table structure for table `PlacementPrepration`
--

CREATE TABLE `PlacementPrepration` (
  `ID` int(11) NOT NULL,
  `Course` text,
  `Subject` text,
  `Ques` text,
  `Option1` text,
  `Option2` text,
  `Option3` text,
  `Option4` text,
  `Explanation` text,
  `Correct` int(2) DEFAULT NULL,
  `Company` text,
  `Publisher` text,
  `Date` datetime DEFAULT NULL,
  `YoutubeLink` text
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `PlacementPrepration`
--

INSERT INTO `PlacementPrepration` (`ID`, `Course`, `Subject`, `Ques`, `Option1`, `Option2`, `Option3`, `Option4`, `Explanation`, `Correct`, `Company`, `Publisher`, `Date`, `YoutubeLink`) VALUES
(1, 'Aptitude', 'Work and Time', 'A and B can complete the work in 10 days, where A alone can do the same work in 14 days. How many days will B take finish the same work alone ?', '11', '35', '34', '24', 'One day work of (A+B) = 1/14\nOne day work of A = 1/10\nOne day work of B = (1/10) - (1/14) = 1/35\nTherefore B can do the work alone in 35 days.', 2, 'None', NULL, '2020-11-30 05:17:23', ''),
(2, 'Aptitude', 'Work and Time', 'Ajay wants to have a house of his own. He appoints two worker to  do the job. Worker A promises that he alone can complete the work in 10 days. Worker B promises that he alone can complete the work in 15 days. Ajay decide to make them work together. In the given options find the earliest when he can get his house completed.', '5 days', '3 days', '10 days', '6 days', 'One day work of A = 1/10\nOne day work of B = 1/15\nOne day work of A + B = 1/10 + 1/15 = 25/150\nThere fore he will his house in 150/25 days i.e. at the end of 6 days.', 4, 'None', NULL, '2020-11-30 05:49:59', '   '),
(3, 'Aptitude', 'Work and Time', 'If man A complete a piece of work in 12 days and the same work is completed by B and C in 15 days and 20 days respectively.\nIn how many days the work is completed if they work together ?', '4 days', '8 days', '6', '5 days', '=ABC/AB+BC+CA\n=12*15*20/12*15+15*20+20*12\n=5 day', 4, 'None', NULL, '2020-11-30 06:41:11', '   '),
(4, 'Aptitude', 'Work and Time', 'A and B together can do a piece of  work in 5 days and A alone can do it in 8 days.\nB alone can do the same piece of work in.', '35/45', '40/3', '53/15', '20/6', 'Hence (A+B)=5 days,A=8 days\nB alone can finish the work in one day=1/5-1/8\n=(8-5/40)part\nB finish the whole work=40/3 days', 2, 'None', NULL, '2020-11-30 06:53:19', '   '),
(5, 'Aptitude', 'Work and Time', 'Ajay and Vijay alone can complete a work in 6 and 8 days respectively while they work for 7 hours per day. Given that they will be working 8 hours per day. Find in what time will they both will complete the work.\r\n', '9', '3', '6', '8', 'Ajay will complete the whole work in 6 * 7 = 42 days if he works one hour daily\r\nVijay will complete the whole work in 8 * 7 = 56 days if he works one hour daily\r\nAjay+ Vijay one day work = 1/42 + 1/56 = 7/168\r\nTime taken to complete the work if they work 8 hours daily = 168 / ( 7 * 8) = 3 days.', 2, 'None', NULL, '2020-11-30 07:45:07', '   '),
(6, 'Aptitude', 'Work and Time', 'Paritosh can do a work in 18 days, Virendra can do the same work in 24 days. Paritosh and Virendra works together for 8 days and then Paritosh leaves. How long will it take Virendra to finish the remaining work?', '1/10', '18/2', '15', '16/3', 'Paritosh one day work = 1/18\r\nVirendra one day work = 1/24\r\nParitosh + Virendra 8 days work = (1/18 + 1/24) * 8 = 7/9\r\nRemaining work = 1 - 7/9 = 2/9\r\nTime taken for Virendra to finish the work (2/9) * 24 = 16/3 days', 4, 'None', NULL, '2020-11-30 07:51:24', '   '),
(7, 'Aptitude', 'Work and Time', 'Viru can complete the a work in 20 days and Dhru can do the same work in 30 days. Only half of the work has to be done before the vacations starts. Find the number of days in which Viru and Dhru can complete the work together.', '6 days', '14 days', '3 days', '21 days', 'Work Viru and Dhru can do together in 1 day = 1 / 20 + 1 / 30 = = 1 / 12\r\nWork done in days = 6 / 12 = 1/2\r\nHence they can do half the work in 6 days.', 1, 'None', NULL, '2020-11-30 07:57:44', '   '),
(8, 'Aptitude', 'Work and Time', 'Paritosh project can be completed by 7 engineers in 12 days. Given that we have 2 such projects and the deadline is 8 days. Find how many more engineers needs to be hired to complete the work the work in the given time.', '15', '14', '25', '18', '1 project in 12 days can be completed by 7 engineers\r\n2 project in 12 days can be completed by 7 * 2 = 14 engineers\r\n2 project in 1 days can be completed by 14 * 12 engineers\r\n2 project in 8 days can be completed by 14 * 12 / 8 = 21 engineers\r\nHence we need 21 - 7 = 14 engineers more.', 2, 'None', NULL, '2020-11-30 08:01:17', '   '),
(9, 'Aptitude', 'Work and Time', '2/3rd of the work can be completed in 4 days by Ajay.  Ravi can complete 3/5th of the work in 6 days. In how many days will they complete the work together.', '2.11', '6.65', '3.75', '5.12', 'Ajay can complete the whole work alone in 4 * 3 / 2 = 6 days\r\nRavi can complete the whole work alone in 6 * 5 /3 = 10 days.\r\nAjay and Ravi together can complete the work in 10 * 6 / (10 + 6) = 15 / 5 = 3.75 days', 3, 'None', NULL, '2020-11-30 08:06:19', '   '),
(10, 'Aptitude', 'Work and Time', 'Together A,B and C charges Rs 550 for a work. If A and B did the 7/11th of the work. What would be the share of C in the money?', '218.11', '235', '220', '257.15', 'Work Done by C = 1 - 7/11 = 4/11\r\nShare of C = 550 * 4 / 11 = 200', 3, 'None', NULL, '2020-11-30 08:19:30', '   '),
(11, 'Aptitude', 'Work and Time', 'A can do a pice of work in 10 days and B in 20 days.If they together work on it for 5 days,then the fraction of the work that is left is-', '1/4', '1/8', '3/4', '3/8', 'A one day work=1/10\r\nB one day work=1/20\r\n(A+B) one day work=10+1/20\r\n=2+1/20=3/2\r\n(A+B) days work=15/20=3/4\r\nRemaining work=1-3/4=1/4', 1, 'None', NULL, '2020-11-30 09:11:00', ''),
(12, 'Aptitude', 'Average', 'Find the average of 9,10,17,12,22.', '10', '18', '14', '5', 'Average=Sum/Total number\n=9+10+17+12+22/5\n=70/5\n=14', 3, 'None', NULL, '2020-12-01 04:35:45', '      '),
(13, 'Aptitude', 'Average', 'Find the average of first 5 odd numbers.', '4', '5', '6', '8', 'Average=Sum/total number\n=1+3+5+7+9\n=25/5\n=5', 2, 'None', NULL, '2020-12-01 04:39:11', '   '),
(14, 'Aptitude', 'Average', 'Find the average of first 5 even numbers.\n', '5', '8', '15', '6', 'Average=sum/total number\n=2+4+6+8+10/5\n=6', 4, 'None', NULL, '2020-12-01 04:41:54', '   '),
(15, 'Aptitude', 'Simple Interest', 'A sum of money at simple interest amounts to Rs. 815 in 3 years and to Rs. 854 in 4 years. The sum is', 'Rs. 650', 'Rs. 690', 'Rs. 698', 'Rs. 700', 'S.I. = Amount - Principal\nS.I. for 1 year = Rs. (854 - 815) = Rs. 39.\r\nS.I. for 3 years = Rs.(39 x 3) = Rs. 117.\r\n\r\nPrincipal = Rs. (815 - 117) = Rs. 698.', 3, 'Cognizant', 'Virendra', '2020-12-06 13:49:29', ''),
(16, 'Aptitude', 'Work and Time', 'Kaushalya can do a work in 20 days, while kaikeyi can do the same work in 25 days. They started the work jointly.Few days later Sumitra also joined them and thus all of them completed the whole work in 10 days. All of them were paid total Rs.700. What is the Share of Sumitra?', 'Rs.130', 'Rs.185', 'Rs.70', 'cant be determined', 'Efficiency of kaushalya = 5%\r\n\rEfficiency of kaikeyi  = 4%\r\n\rThus, in 10 days working together they will complete only 90% of the work.\r\n\r          [(5+4)*10] =90\r\n\r\nHence, the remaining work will surely done by sumitra, which is 10%.\r\n\rThus, sumitra will get 10% of Rs. 700, which is Rs.70', 3, 'Cognizant', 'Virendra', '2020-12-06 14:08:01', '      '),
(17, 'Aptitude', 'Profit And Loss', 'The list price of an electric iron is Rs. 300. If two successive discounts of 15% and 10% are allowed?', 'Rs. 229.50\r', 'Rs. 231.50', 'Rs. 232.50\r', 'Rs. 234.50\r', '15% = 0.15\n1 - 0.15 = 0.85	\n10% = 0.1\n1 - 0.1 = 0.9	\n\nSP = (1 - d1/100) (1- d2/100) Ã— MP\n300x0.85x0.90 = Rs 229.50', 1, 'AMCAT', 'Virendra', '2020-12-07 05:01:06', ''),
(18, 'Aptitude', 'Simple Interest', 'Aman deposits Rs. 5000 in his bank account for 5 years to earn an intrest of 12%.What\r\namount will he get after 5 years?', 'Rs.2000', 'Rs.3000', 'Rs.8300', 'Rs.8000\r', 'S.I. = (PxRxT)/100\nP = Rs. 5000\nR = 12%\nT = 5Years\nS.I. =(5000x12x5)/100 = 3000\nAmount=S.I. + P\nAmount = 3000+ 5000 = Rs. 8000', 4, 'AMCAT', 'Virendra', '2020-12-07 05:10:00', '   '),
(19, 'Aptitude', 'Simple Interest', 'Given that the interest is only earned on principal .if an investment of Rs 1000.00 amounts to\r\nRs 1440.00 in two years then what is the rate of interest earned?', '21%', '44%', '22%\r', '20%', 'P=Rs.1000\nT=2years\nA=Rs.1440\nS.I. =A-P=1440-1000=440\nS.I. =(PxRxT)/100\n440=(1000xRx2)/100\nR=22%', 3, 'AMCAT', 'Virendra', '2020-12-07 05:25:04', '   '),
(20, 'Aptitude', 'Profit And Loss', 'A flower seller purchases roses at Rs. 96 a dozen and sells them at Rs 10 per flower. What is\r\nthe profit percent of the flower seller?', '40%', '25%', '20%', '15%', '12 flowers = Rs 96\r\n\r1 flower = 96 Ã· 12 = Rs 8\nSelling Price = Rs 10\r\n\rProfit = 10 - 8 = Rs 2\nProfit Percentage = 2/8 x 100 = 25%', 2, 'AMCAT', 'Virendra', '2020-12-07 05:31:39', ''),
(21, 'Aptitude', 'Profit And Loss', 'Mauli purchased a designer saree from Mumbai at 8/9th of its MRP, When she came back to\r\nDelhi, her neighbour coaxed Mauli to sell the saree to her. She was even ready to pay 9% more\r\nthan Its MRP. What would Maull gain percentage be, If she decides to sell the saree to her\r\nneighbour?', '15.59%', '16.61%', '20.38%', '22.62%', 'let the MRP on saree is = 900 RS\r\nshe bought it on price = 900*8/9 = 800 Rs\r\nnow her neighbour pay her 9% more on MRP\r\nwhich is = 900*9/100 = 81\r\n900+81 = 981 Rs\r\nso total she gaining = 981 - 800 = 181 Rs\non 800 Rs she gaining 181 Rs\r\n800 Rs is the value of = 100 %\r\n1 Rs is value of = 100/800%\r\n981 Rs is value of = 100/800*981 = 122.62 %\r\nso total she getting is 122.62%\r\ngain = total price - cost price\r\ngain % = getting Amount - 100%\r\n122.62-100 = 22.62 %', 4, 'AMCAT', 'Virendra', '2020-12-07 05:40:36', ''),
(22, 'Aptitude', 'Profit And Loss', 'Zegna car was in rage two years back and it cost Rs 5,60,000 then. Now, however, with many\r\nnew hi-tech cars coming into the market, the price of the car has dipped to Rs 4,00,000. Find\r\nthe decrease in price of the car as a percentage of the old price.', '28%', '28.57% ', '40%', '71.42%', 'Loss=560000-400000 = 160000\nLoss%=(160000/560000)x100\nLoss%=28.57%', 2, 'AMCAT', 'Virendra', '2020-12-07 05:45:04', ''),
(23, 'Aptitude', 'Profit And Loss', 'When the price of shoes is decreased by 10%, the number of pairs sold increased by 20%.\r\nWhat is the net effect on sales?', '8% decrease\r', '10% decrease', '8% increase', '10% increase', 'Net Effect = -a +b -(axb)/100\n=-10+20-(10x20)/100\n=+8\n8% increase', 3, 'AMCAT', 'Virendra', '2020-12-07 05:52:15', ''),
(24, 'Aptitude', 'Profit And Loss', 'The printed price on a book is Rs. 400, a bookseller offers a 10% discount on it. If he still\r\nearns a profit of 12%, then the cost price of the book is', 'Rs.260', ' Rs.360\r', ' Rs.352', 'Rs.300', 'Given, printed price = Rs 400\r\nBookseller offer discount of 10% = 0.1 * 400= Rs. 40\r\nTherefore, new selling price = Rs. 360\n12% profit => x*120/100=360\nx=360*100/120\nx=Rs 300', 4, 'AMCAT', 'Virendra', '2020-12-07 05:57:07', ''),
(25, 'Aptitude', 'Profit And Loss', 'If at 15% profit. the selling price of dozen pencils is Rs.13.80 then wt at is the cost price of a\r\npencil? ', 'Re. 1', 'Re. 0.85', 'Rs. 1.15', 'Rs. 1.10', 'Cost price of 1 pencil = Rs 1\r\nStep-by-step explanation\r\nGiven , selling price of dozen pencils (s.p) = Rs 13.80\r\nProfit (g) = 15%,\r\ncost price of dozen pencils => (S.P.*100)/(100+g)\n=(13.80*100)/(100+15)\n=12\n\nNow,\r\nCost price of 12 (dozen) pencils = Rs 12\r\nCost price of 1 pencil = 12/12= Rs 1\r\nTherefore,.\r\nCost price of 1 pencil = Rs 1', 1, 'AMCAT', 'Virendra', '2020-12-07 05:59:50', '   '),
(26, 'Aptitude', 'Profit And Loss', 'A salesman has the library to sell a hair dryer in his store at a price between Rs. 300 and Rs.\r\n700. Profit earned by selling the hair dryer for Rs. 650 is twice the loss incurred when it is sold\r\nfor Rs. 350. What is the cost price of the hair dryer?', 'Rs. 550\r', 'Rs. 350', 'Rs. 450', 'Rs. 150', 'Profit = selling price â€“ cost price\r\nLoss = cost price â€“ selling price\r\nGiven 650 â€“ CP = 2(CP â€“ 350)\r\n650 â€“ CP = 2CP â€“ 700\r\n650 + 700 = 2CP + CP\r\n3CP = 1350\r\nCP = 1350 / 3\r\n= 450\r\n=>Rs 450', 3, 'AMCAT', 'Virendra', '2020-12-07 06:02:40', ''),
(27, 'Aptitude', 'Average', 'If the average of m number is n^2 and that of n numbers is m^2,then the average of (m+n).\n', '(m+n)', 'mn', 'm/n', 'm-n', 'sum of m numbers=m*n^2\nsum of n number=n*m^2\n\nso, average of (m+n numbers)\n\n=Sum of numbers/Total Numbers\n=mn^2+nm^2/m+n\n=mn(m+n)/(m+n)\n=mn', 2, 'None', 'Paritosh', '2020-12-07 08:56:30', ''),
(28, 'Aptitude', 'Average', 'The average of three numbers is 28.The first number is half of the second number and the third number is twice the second.Find the third number.', '18', '24', '36', '48', 'Let the first number be=x\nso the second number=2x\nThird number=4x\nTotal=x+2x+4x=28*3\n7x=28*3\nx=12\nThird number=4x=4*12=48', 4, 'None', 'Paritosh', '2020-12-07 09:35:49', ''),
(29, 'Aptitude', 'Average', 'Out of three number,the first is twice the second number and half of third number.If the average of all the all the three numbers is 56 the difference  between first and third numbers is', '12', '20', '24', '48', 'Let the first number=2x\nsecond number=x\nTotal of three numbers=2x+x+4x=56*3\n=7x=56*3\nx=8*3=24\nDifference between first and thrid number\n4x-2x=2x=2x=2*24=48\n', 4, 'None', 'Paritosh', '2020-12-07 09:43:57', ''),
(30, 'Aptitude', 'Average', 'The average of 3^30,3^60,3^90 is', '3^60', '30^30+30^90', '3^10+30^20+30^30', '3^29+3^59+3^89', 'Sum of all terms/ Number of terms=3^29+3^59+3^89\n', 4, 'None', 'Paritosh', '2020-12-07 10:11:06', '   '),
(31, 'Aptitude', 'Average', 'The largest and smallest number formed by 0,2,4 are-', '312', '400', '300', '230', 'Largest number are formed using number 0,2,4=420\nSmallest number are formed using number 0,2,4=240\nAverage=204+420/2\n=312', 1, 'None', 'Paritosh', '2020-12-07 10:22:59', ''),
(32, 'Aptitude', 'Average', 'What is the average of square of the natural numbers from 1 to 41?', '20.5', '581', '703', '307', 'Formula\nAverage of square of the natural numbers\n=(n+1)(2n+1)/6\n=(41+1)(2*41+1)/6\n42*83/6\n=3486/6\n=581', 2, 'None', 'Paritosh', '2020-12-07 10:54:06', ''),
(33, 'Aptitude', 'Profit And Loss', 'A man sells 12 candies for Rs.12 & loses Rs.2.40. If he sells 12 candies for Rs.16. how much\r\ndoes he gain or lose?', 'Gains Rs 4 ', 'Loses Rs. 6', 'Gains Rs. 6.40 ', 'Gains Rs. 1.60', 'CP = SP + LOSS\nCP = 2.40+12 = 14.40\nfor 12candies SP = 16,\r\nCP = 14.40\r\nSP>CP  profit\r\n\r14.40 - 16 = 1.60 gains', 4, 'AMCAT', 'Virendra', '2020-12-08 03:35:45', ''),
(34, 'Aptitude', 'Simple Interest', 'An investment earns 4 paisa per rupee invested. If at the end of the year. the interest earned\r\nby an investment is Rs. 100, then the investment is equal to ', 'Rs 2,500\r', 'Rs. 2,200', 'Rs. 4,000', 'Rs. 1,000', '1rupee=100ps\nInterest rate = Interest/principal\r\n\r=  4ps/100ps\r\n= 0.04\r\n\nP=Interest/Interest Rate\n=100/0.04\nâ‡’P = 2500', 1, 'AMCAT', 'Virendra', '2020-12-08 03:49:55', ''),
(35, 'Aptitude', 'Percentage', 'If x is 80% of y, what percent of x is y?', '100%', '125%', '110%', '80%', 'Let y is 100 then x=80\n\nRequired %=100/80*100=125%', 2, 'None', 'Paritosh', '2020-12-09 04:46:44', ''),
(36, 'Aptitude', 'Percentage', 'The Income of Ram and Shyam are Rs 4000 and Rs.6000 respectively then Shyam income is how much % more than Ram?', '75%', '25%', '50%', '77.7%', 'More %=6000-4000/4000*100=50%', 3, 'None', 'Paritosh', '2020-12-09 04:51:24', ''),
(37, 'Aptitude', 'Percentage', 'If the income of A is 40% less than that of B,How much percent B income is more than that of A?', '50%', '66.66%', '40%', '70%', 'More %=40/60*100\n=66.66%', 2, 'None', 'Paritosh', '2020-12-09 04:56:18', ''),
(38, 'Aptitude', 'Percentage', 'A man spends 40% on food, 20% on house rent,12% on travel and 10% on education.After all these expenditures he saved Rs. 7200.Find the amount spent on travel?', '10000', '9000', '6000', '4800', 'Let the total income be x.Then\nTotal expenditure=x*(40%+20%+12%+10%)\n=X*82%\nTotal saving=x-x*82%\n=x*18%\nThen x*18%=7200\nx=7200/18*100=40,000\n\nExpenditure on travel=12%\nx*12%=40000*12/100=Rs.4800', 4, 'None', 'Paritosh', '2020-12-09 05:06:58', ''),
(39, 'Aptitude', 'Percentage', 'What should be added to 15% of 160  so that the sum may be equal to 25% of 240?', '36', '48', '25', '50', '160*15%+?=240*25%\n?=60-24=36', 1, 'None', 'Paritosh', '2020-12-09 05:11:15', ''),
(40, 'Aptitude', 'Percentage', 'In an exam,one candidate got 23% and failed by 36 marks while another candidate got 35% and got 48 marks more than pass marks then maximum marks are ?', '700', '760', '800', '500', '35%-23%=48+36\n12%=84\nMax.Marks=84/12*100\n=700', 1, 'None', 'Paritosh', '2020-12-09 05:18:26', ''),
(41, 'Aptitude', 'Speed,Time and Distance', 'A plane is moving with the speed of 180 km/hr.Its speed in metre per second is', '50 km', '40 km', '100 km', '60 km', '180*5/18=50 m/s', 1, 'None', 'Paritosh', '2020-12-10 07:24:18', ''),
(42, 'Aptitude', 'Speed,Time and Distance', 'In covering a certain distance the speed of A and B are in the ratio of 34. A takes 30 minute  more than B to reach the destination. The time taken by A to  reach the destination is- ', '5 hours', '6 hours', '2 hours', '3 hours', 'Let the distance of destination be D km\nLet the speed of A = 3X km/hr\nThe speed of B = 4X km/hr\n\nAccording to the question.\nD/3X-D/4X = 30=1/2\nD/12X = 1/2\nD/X=6\nTime taken by A=D/3X= 6/3 = 2 hours', 3, 'None', 'Paritosh', '2020-12-10 07:33:11', ''),
(43, 'Aptitude', 'Speed,Time and Distance', 'Excluding stoppages,the speed of a bus is 54 kmph and including stoppages, it is 45 kmph.For how many minutes does the bus stop per hour ?', '12 min', '10 min', '6 min ', '9 min', 'Due to stoppages, it covers 9 km less \nTime taken to cover 9 km\n=(9/54*60)min\n=10 min', 2, 'None', 'Paritosh', '2020-12-10 07:50:14', ''),
(44, 'Aptitude', 'Speed,Time and Distance', 'A man goes from place A to B at a speed of 12 km/hr. and return at the speed of 18 km/hr. The average speed  for the whole journey is-', '20 km/hr', '14 km/hr', '16 km/hr', '25 km/hr', 'Average Speed =2*12*18/(12+18)\n=2*12*18/30\n=14 km/hr', 2, 'None', 'Paritosh', '2020-12-10 08:02:53', ''),
(45, 'Aptitude', 'Average', 'Given abc = 234, and 2a - 3b + 4c = 33. Find the value of a.', '10', '8', '6', '9', 'Let the ratio be multiple of x.\r\nTherefore the numbers are 2x, 3x, 4x\r\n\r\nTherefore,\r\n\r\n2 * (2x) - 3 * (3x) + 4 * (4x) = 33\r\nSolving x = 3\r\n\r\nHence a = 2 * 3 = 6', 3, 'None', 'Paritosh', '2020-12-12 11:53:31', ''),
(46, 'Aptitude', 'Ratio &Proporations', 'The ratio between the two numbers is 38 and the difference between them is 115. Find the smallest among the two numbers.', '70', '80', '75', '69', 'Let the ratio be multiple of x\r\nThe numbers will be 3x and 8x\r\nATQ,\r\n8x - 3x = 115\r\nSolving,\r\nx = 23\r\nThe smaller number = 3x = 3 * 23 = 69', 4, 'None', 'Paritosh', '2020-12-12 11:55:43', ''),
(47, 'Aptitude', 'Ratio &Proporations', 'In a 45 litre mixture containing milk and water, the ratio of milk to water is 21. Find the amount of water that needs to be added to the mixture to make the ratio 12', '56', '45', '85', '60', 'Let the ratio be multiple of x\r\nMilk = 2x\r\nWater = x\r\nTherefore\r\n2x + x = 45\r\nx = 15\r\nMilk = 30\r\nIn the new mixture the ratio is 12\r\ni.e. the amount of water is double the amount of milk i.e. 30 * 2 = 60\r\nHence extra water added = 60 - 15 = 45', 2, 'None', 'Paritosh', '2020-12-12 11:57:07', ''),
(48, 'Aptitude', 'Ratio &Proporations', 'The ratio of three numbers is 567 and the product of the numbers is 5670. Find the smallest number.', '25', '35', '20', '15', 'Let the ratio be multiple of x\r\nThe numbers will be 5x, 6x, 7x\r\nATQ,\r\n\r\n5x * 6x * 7x = 5760\r\nSolving we get\r\nx = 3\r\nThe smallest number is 15', 4, 'None', 'Paritosh', '2020-12-12 11:58:37', ''),
(49, 'Aptitude', 'Ratio &Proporations', 'Among 504 students of a class the ratio between boys and the girls is 1311. Find the new ratio if 3 more girls are admitted in the class.', '12', '34', '76', '55', 'Let the ratio be multiple of x.\r\nBoys = 13x\r\nGirls = 11x\r\nATQ,\r\n13x + 11x = 504\r\n24x = 504\r\nx = 21\r\n\r\nTherefore,\r\nGirls = 231\r\n12 girls are added , new girls = 231 + 3 = 234\r\nBoys = 13 * 21 = 273\r\nRatio = 273234 = 76', 3, 'None', 'Paritosh', '2020-12-12 12:01:57', ''),
(50, 'Aptitude', 'Ratio &Proporations', 'The ratio between two numbers is 45, their lcm is 180. Which of the following one of the two numbers?', '36', '50', '39', '65', 'Let the number be 4x and 5x\r\nThe lcm will be 20x\r\nATQ,\r\n20x = 180\r\nx = 9\r\n\r\nNumbers are 36 and 45', 1, 'None', 'Paritosh', '2020-12-12 12:04:02', ''),
(51, 'Aptitude', 'Ratio &Proporations', 'The marks scored in English is twice the arks scored in Science. If the marks score by him in English and Maths is in the ratio 23 and the total marks scored in all the three subject is 180. Find the marks scored in science', '30', '35', '45', '37', 'Marks in English = 2x\r\nMarks in Maths = 3x\r\nMarks in science = x\r\nTotal marks = x + 2x + 3x = 180\r\nx = 30', 1, 'None', 'Paritosh', '2020-12-12 12:05:37', ''),
(52, 'Aptitude', 'Ratio &Proporations', 'The ratio of two number is 56 Given the HCF of two numbers is 25. Find the sum of the numbers', '275', '300', '350', '540', 'The numbers be 5x and 6x\r\nHCF is 25\nTherefore, x = 25\nNumbers = 125 and 150\nSum = 275', 1, 'None', 'Paritosh', '2020-12-12 12:30:36', '');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `PlacementPrepration`
--
ALTER TABLE `PlacementPrepration`
  ADD PRIMARY KEY (`ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `PlacementPrepration`
--
ALTER TABLE `PlacementPrepration`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=53;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
