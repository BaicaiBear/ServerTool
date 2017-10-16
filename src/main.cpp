#include <iostream>
#include <stdlib.h>

int save(){
}

int main(){
 int i;
 i = 0;
 while(i==0){  
  char a;
  std::cout<<"1-------启动服务器"<<std::endl<<"2-------清除用户数据(players)"<<std::endl<<"3-------清除地图信息(worlds)"<<std::endl<<"4-------清除核心"<<std::endl<<"5-------升级核心"<<std::endl<<"0-------退出程序"<<std::endl<<"请输入选择：";
  std::cin>>a;
  if(a=='1'){
    system("./*.sh");
  }
  else if(a=='2'){
    system("rm -rf players");
  }
  else if(a=='3'){
    system("rm -rf worlds");
  }
  else if(a=='4'){
    system("rm *.jar");
    system("yes");
  }
  else if(a=='5'){
    system("./*updata.sh");
  }
  else if(a=='0'){
    break;
  }
  else{
    std::cout<<"您的输入有误，请重新输入"<<std::endl;  }
 }
  return 0;
}  
