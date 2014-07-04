-- phpMyAdmin SQL Dump
-- version 4.0.10deb1
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Jul 04, 2014 at 11:14 AM
-- Server version: 5.5.37-0ubuntu0.14.04.1
-- PHP Version: 5.5.9-1ubuntu4.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `sample`
--

-- --------------------------------------------------------

--
-- Table structure for table `csv`
--

CREATE TABLE IF NOT EXISTS `csv` (
  `Class_name` varchar(50) DEFAULT NULL,
  `Subject_Name` varchar(50) DEFAULT NULL,
  `Subject_Code` varchar(50) DEFAULT NULL,
  `Start_Roll_No` varchar(20) DEFAULT NULL,
  `End_Roll_No` varchar(20) DEFAULT NULL,
  `Not_included` varchar(500) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `csv`
--

INSERT INTO `csv` (`Class_name`, `Subject_Name`, `Subject_Code`, `Start_Roll_No`, `End_Roll_No`, `Not_included`) VALUES
('CSE', 'DAA', 'BTCS-303', '119', '123', '122,123,124,126,'),
('Mech', 'Thermal', 'BTME-202', '388', '395', '390,392,394,395,396,'),
('IT', 'cyber laws', 'BTIT-505', '487', '495', '488,493,495,'),
('CSE', 'DAA', 'BTCS-303', '119', '123', '122,123,124,126,'),
('Mech', 'Thermal', 'BTME-202', '388', '395', '390,392,394,395,396,'),
('IT', 'cyber laws', 'BTIT-505', '487', '495', '488,493,495,'),
('CSE', 'DAA', 'BTCS-303', '119', '123', '122,123,124,126,'),
('Mech', 'Thermal', 'BTME-202', '388', '395', '390,392,394,395,396,'),
('IT', 'cyber laws', 'BTIT-505', '487', '495', '488,493,495,'),
('CSE', 'DAA', 'BTCS-303', '119', '123', '122,123,124,126,'),
('Mech', 'Thermal', 'BTME-202', '388', '395', '390,392,394,395,396,'),
('IT', 'cyber laws', 'BTIT-505', '487', '495', '488,493,495,');

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
