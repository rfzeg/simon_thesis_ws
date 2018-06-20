%% Import data from text file.
% Script for importing data from the following text file:
%
%    C:\Users\Utente\Dropbox\Abschlussarbeit\PEM\4-Results\amcl_localization\pose_amcl_graphmap.csv
%
% To extend the code to different selected data or a different text file,
% generate a function instead of a script.

% Auto-generated by MATLAB on 2017/12/05 10:45:58

%% Initialize variables.
filename_pose = 'C:\Users\Utente\Dropbox\Abschlussarbeit\PEM\4-Results\graph_localization\tuned\f3\pose.csv';
filename_odom = 'C:\Users\Utente\Dropbox\Abschlussarbeit\PEM\4-Results\graph_localization\tuned\f3\odom.csv';
delimiter = ';';
startRow = 2;

%% Format string for each line of text:
%   column1: double (%f)
%	column2: double (%f)
%   column3: double (%f)
%	column4: text (%s)
%   column5: double (%f)
%	column6: double (%f)
%   column7: double (%f)
%	column8: double (%f)
%   column9: double (%f)
%	column10: double (%f)
%   column11: double (%f)
%	column12: double (%f)
%   column13: double (%f)
%	column14: double (%f)
%   column15: double (%f)
%	column16: double (%f)
%   column17: double (%f)
%	column18: double (%f)
%   column19: double (%f)
%	column20: double (%f)
%   column21: double (%f)
%	column22: double (%f)
%   column23: double (%f)
%	column24: double (%f)
%   column25: double (%f)
%	column26: double (%f)
%   column27: double (%f)
%	column28: double (%f)
%   column29: double (%f)
%	column30: double (%f)
%   column31: double (%f)
%	column32: double (%f)
%   column33: double (%f)
%	column34: double (%f)
%   column35: double (%f)
%	column36: double (%f)
%   column37: double (%f)
%	column38: double (%f)
%   column39: double (%f)
%	column40: double (%f)
%   column41: double (%f)
%	column42: double (%f)
%   column43: double (%f)
%	column44: double (%f)
%   column45: double (%f)
%	column46: double (%f)
%   column47: double (%f)
% For more information, see the TEXTSCAN documentation.
formatSpec = '%f%f%f%s%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%[^\n\r]'; %%[^\n\r]

%% Open the text file.
fileID_pose = fopen(filename_pose,'r');
fileID_odom = fopen(filename_odom,'r');

%% Read columns of data according to format string.
% This call is based on the structure of the file used to generate this
% code. If an error occurs for a different file, try regenerating the code
% from the Import Tool.
dataArray_pose = textscan(fileID_pose, formatSpec, 'Delimiter', delimiter, 'HeaderLines' ,startRow-1, 'ReturnOnError', false);
dataArray_odom = textscan(fileID_odom, formatSpec, 'Delimiter', delimiter, 'HeaderLines' ,startRow-1, 'ReturnOnError', false);

%% Close the text file.
fclose(fileID_pose);
fclose(fileID_odom);

%% Post processing for unimportable data.
% No unimportable data rules were applied during the import, so no post
% processing code is included. To generate code which works for
% unimportable data, select unimportable cells in a file and regenerate the
% script.

%% Allocate imported array to column variable names for the file odom_amcl_graphmap
time_odom = dataArray_odom{:, 1};
fieldheaderseq_odom = dataArray_odom{:, 2};
fieldheaderstamp_odom = dataArray_odom{:, 3};
fieldheaderframe_id_odom = dataArray_odom{:, 4};
fieldposeposepositionx_odom = dataArray_odom{:, 5};
fieldposeposepositiony_odom = dataArray_odom{:, 6};
fieldposeposepositionz_odom = dataArray_odom{:, 7};
fieldposeposeorientationx_odom = dataArray_odom{:, 8};
fieldposeposeorientationy_odom = dataArray_odom{:, 9};
fieldposeposeorientationz_odom = dataArray_odom{:, 10};
fieldposeposeorientationw_odom = dataArray_odom{:, 11};
fieldposecovariance0_odom = dataArray_odom{:, 12};
fieldposecovariance1_odom = dataArray_odom{:, 13};
fieldposecovariance2_odom = dataArray_odom{:, 14};
fieldposecovariance3_odom = dataArray_odom{:, 15};
fieldposecovariance4_odom = dataArray_odom{:, 16};
fieldposecovariance5_odom = dataArray_odom{:, 17};
fieldposecovariance6_odom = dataArray_odom{:, 18};
fieldposecovariance7_odom = dataArray_odom{:, 19};
fieldposecovariance8_odom = dataArray_odom{:, 20};
fieldposecovariance9_odom = dataArray_odom{:, 21};
fieldposecovariance10_odom = dataArray_odom{:, 22};
fieldposecovariance11_odom = dataArray_odom{:, 23};
fieldposecovariance12_odom = dataArray_odom{:, 24};
fieldposecovariance13_odom = dataArray_odom{:, 25};
fieldposecovariance14_odom = dataArray_odom{:, 26};
fieldposecovariance15_odom = dataArray_odom{:, 27};
fieldposecovariance16_odom = dataArray_odom{:, 28};
fieldposecovariance17_odom = dataArray_odom{:, 29};
fieldposecovariance18_odom = dataArray_odom{:, 30};
fieldposecovariance19_odom = dataArray_odom{:, 31};
fieldposecovariance20_odom = dataArray_odom{:, 32};
fieldposecovariance21_odom = dataArray_odom{:, 33};
fieldposecovariance22_odom = dataArray_odom{:, 34};
fieldposecovariance23_odom = dataArray_odom{:, 35};
fieldposecovariance24_odom = dataArray_odom{:, 36};
fieldposecovariance25_odom = dataArray_odom{:, 37};
fieldposecovariance26_odom = dataArray_odom{:, 38};
fieldposecovariance27_odom = dataArray_odom{:, 39};
fieldposecovariance28_odom = dataArray_odom{:, 40};
fieldposecovariance29_odom = dataArray_odom{:, 41};
fieldposecovariance30_odom = dataArray_odom{:, 42};
fieldposecovariance31_odom = dataArray_odom{:, 43};
fieldposecovariance32_odom = dataArray_odom{:, 44};
fieldposecovariance33_odom = dataArray_odom{:, 45};
fieldposecovariance34_odom = dataArray_odom{:, 46};
fieldposecovariance35_odom = dataArray_odom{:, 47};

%% Allocate imported array to column variable names for the file pose_amcl_graphmap
time_pose = dataArray_pose{:, 1};
fieldheaderseq_pose = dataArray_pose{:, 2};
fieldheaderstamp_pose = dataArray_pose{:, 3};
fieldheaderframe_id_pose = dataArray_pose{:, 4};
fieldposeposepositionx_pose = dataArray_pose{:, 5};
fieldposeposepositiony_pose = dataArray_pose{:, 6};
fieldposeposepositionz_pose = dataArray_pose{:, 7};
fieldposeposeorientationx_pose = dataArray_pose{:, 8};
fieldposeposeorientationy_pose = dataArray_pose{:, 9};
fieldposeposeorientationz_pose = dataArray_pose{:, 10};
fieldposeposeorientationw_pose = dataArray_pose{:, 11};
fieldposecovariance0_pose = dataArray_pose{:, 12};
fieldposecovariance1_pose = dataArray_pose{:, 13};
fieldposecovariance2_pose = dataArray_pose{:, 14};
fieldposecovariance3_pose = dataArray_pose{:, 15};
fieldposecovariance4_pose = dataArray_pose{:, 16};
fieldposecovariance5_pose = dataArray_pose{:, 17};
fieldposecovariance6_pose = dataArray_pose{:, 18};
fieldposecovariance7_pose = dataArray_pose{:, 19};
fieldposecovariance8_pose = dataArray_pose{:, 20};
fieldposecovariance9_pose = dataArray_pose{:, 21};
fieldposecovariance10_pose = dataArray_pose{:, 22};
fieldposecovariance11_pose = dataArray_pose{:, 23};
fieldposecovariance12_pose = dataArray_pose{:, 24};
fieldposecovariance13_pose = dataArray_pose{:, 25};
fieldposecovariance14_pose = dataArray_pose{:, 26};
fieldposecovariance15_pose = dataArray_pose{:, 27};
fieldposecovariance16_pose = dataArray_pose{:, 28};
fieldposecovariance17_pose = dataArray_pose{:, 29};
fieldposecovariance18_pose = dataArray_pose{:, 30};
fieldposecovariance19_pose = dataArray_pose{:, 31};
fieldposecovariance20_pose = dataArray_pose{:, 32};
fieldposecovariance21_pose = dataArray_pose{:, 33};
fieldposecovariance22_pose = dataArray_pose{:, 34};
fieldposecovariance23_pose = dataArray_pose{:, 35};
fieldposecovariance24_pose = dataArray_pose{:, 36};
fieldposecovariance25_pose = dataArray_pose{:, 37};
fieldposecovariance26_pose = dataArray_pose{:, 38};
fieldposecovariance27_pose = dataArray_pose{:, 39};
fieldposecovariance28_pose = dataArray_pose{:, 40};
fieldposecovariance29_pose = dataArray_pose{:, 41};
fieldposecovariance30_pose = dataArray_pose{:, 42};
fieldposecovariance31_pose = dataArray_pose{:, 43};
fieldposecovariance32_pose = dataArray_pose{:, 44};
fieldposecovariance33_pose = dataArray_pose{:, 45};
fieldposecovariance34_pose = dataArray_pose{:, 46};
fieldposecovariance35_pose = dataArray_pose{:, 47};

%% Plots

figure;
plot(fieldposeposepositionx_odom,fieldposeposepositiony_odom,'g--');
hold on
plot(fieldposeposepositionx_pose,fieldposeposepositiony_pose,'r--o');
%title('Graph-Slam with Graph based map')
xlabel('Forward displacement [m]');
ylabel('Lateral displacement [m]');
legend('Odometry filtered','Graph pose');


%% Clear temporary variables
clearvars filename delimiter startRow formatSpec fileID dataArray ans;