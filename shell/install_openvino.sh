#Installation of openvino on tested for ubuntu 19.04.
#the file won't run as is but you would have to run every command seperately.


#Download the packages
wget http://registrationcenter-download.intel.com/akdlm/irc_nas/15512/l_openvino_toolkit_p_2019.1.144.tgz

#move to your download location
cd ~/Downloads/

#extraction
tar -xvzf l_openvino_toolkit_p_2019.1.144.tgz
cd /l_openvino_toolkit_p_2019.1.144/
#run the install script
bash install.sh or install_GUI.sh

#installing dependencies
cd /opt/intel/openvino/install_dependencies
sudo -E ./install_openvino_dependencies.sh

#set-up shell for open-vino variables
source /opt/intel/openvino/bin/setupvars.sh

#pre-requites for models
cd /opt/intel/openvino/deployment_tools/model_optimizer/install_prerequisites
sudo ./install_prerequisites.sh

#test run demo
cd /opt/intel/openvino/deployment_tools/demo
./demo_squeezenet_download_convert_run.sh


#link for the installation docs
# https://docs.openvinotoolkit.org/latest/_docs_install_guides_installing_openvino_linux.html
