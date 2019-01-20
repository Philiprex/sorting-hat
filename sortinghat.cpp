//quiz
#include <iostream>
int main(){
  
  //setup
  
  //intro
  std::cout << "Hey, here's a quick four question house quiz I made based on my interpretaions of the houses. I know you may interpret the differently and the questions are a bit simple, but I hope you enjoy it nonetheless!\n\n\n";
  
  //declare vars
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int q1;
  int q2;
  int q3;
  int q4;
  int q5;

  
//opening
std::cout << "Welcome to the  ceremony. I am the sorting hat. After just a few questions I will assign you to a house. The people in your house will be your friends, your team, and your family. Well let's get on with it why don'1t we?\n\n";

  //q1
    //question
std::cout << "It is a dark and stormy night. the wind is howling, lightning illuminates the sky, and thunder booms in the distance. Tonight you can be found\n 1) Studying in your dorm.\n 2) Playing a nice round of wizard chess in the common room.\n 3) Having a broom race lit only by the lightning.\n 4) Talking with your friend about their day.\n";
  
    //recieves response and assigns variable
std::cin >> q1;
  
    //adds points to respective hous
  {  if (q1==1)
    ravenclaw++;

  if (q1==2)
    gryffindor++;

  if (q1==3)
    slytherin++;
  
  if (q1==4)
    hufflepuff++; 
  }
  
    //displays points (for dev)
      std::cout << "\n" << ravenclaw << hufflepuff << slytherin << gryffindor << "\n";
  
  //q2
std::cout << "Ah, I see. On to question 2. What topic intersts you most?\n 1) Potions\n 2) Charms\n 3) Herbology\n 4) Transfiguration\n";
  
std::cin >> q2;
  
  
  {  if (q2==1)
    slytherin++;

  if (q2==2)
    ravenclaw++;

  if (q2==3)
    hufflepuff++;

  if (q2==4)
    gryffindor++; 
}
  
    std::cout << "\n" << ravenclaw << hufflepuff << slytherin << gryffindor << "\n";
  
  //q3
std::cout << "Well that certainly shows. Anyway, on to our third question. I think the most important quality is for a person to be\n 1) True.\n 2) Loyal.\n 3) Wise.\n 4) Brave.\n";
  
std::cin >> q3;
  
  
  {  if (q3==1)
    gryffindor++;

  else if (q3==2)
    hufflepuff++;

  else if (q3==3)
    ravenclaw++;

  else if (q3==4)
    slytherin++; 
}

      std::cout << "\n" << ravenclaw << hufflepuff << slytherin << gryffindor << "\n";
  
  //q4
std::cout << "Very telling. On to our final question. Which land are you drawn to?\n 1) Classic colonial American towns.\n 2) The summit of Everest.\n 3) London.\n 4) A sprawling university.\n";
  
std::cin >> q4;
  
  
  {  if (q4==1)
    hufflepuff++;

  else if (q4==2)
    slytherin++;

  else if (q4==3)
    gryffindor++;

  else if (q4==4)
    ravenclaw++; 
}
  
      std::cout << "\n" << ravenclaw << hufflepuff << slytherin << gryffindor << "\n";
  
    //q5
std::cout << "How big is philips benis?\n 1) sorta\n 2) pretty\n 3) very\n 4) chuck norris\n";
  
std::cin >> q5;
  
  
  {  if (q5==1)
    hufflepuff++;

  else if (q5==2)
    slytherin++;

  else if (q5==3)
    gryffindor++;

  else if (q5==4)
    ravenclaw++; 
}
  
      std::cout << "\n" << ravenclaw << hufflepuff << slytherin << gryffindor << "\n";

  //logic computer
  //1
  if (gryffindor>ravenclaw){
    
    if (slytherin>hufflepuff){
      if (slytherin>gryffindor)
        std::cout << "S";
      if (gryffindor>slytherin)
        std::cout << "G";
      if (slytherin==gryffindor)
        std::cout << "GS";}
    
    if (hufflepuff>slytherin){
      if (hufflepuff>gryffindor)
        std::cout << "H";
      if (gryffindor>hufflepuff)
        std::cout << "G";
      if (hufflepuff==gryffindor)
        std::cout << "GH";}
    
    if (slytherin==hufflepuff){
      if (slytherin>gryffindor)
        std::cout << "SH";
      if (slytherin==gryffindor)
        std::cout << "SGH";}
    }
  
  //2
  if (ravenclaw>gryffindor){
    
    if (slytherin>hufflepuff){
      if (slytherin>ravenclaw)
        std::cout << "S";
      if (ravenclaw>slytherin)
        std::cout << "R";
      if(slytherin==ravenclaw)
        std::cout << "RS";}
    
    if (hufflepuff>slytherin){
      if (hufflepuff>ravenclaw)
        std::cout << "H";
      if (ravenclaw>hufflepuff)
        std::cout << "R";
      if (ravenclaw==hufflepuff)
        std::cout << "HR";}
    
    if (slytherin==hufflepuff){
      if (ravenclaw>slytherin)
        std::cout << "R";
      if (slytherin>ravenclaw)
        std::cout << "SH";
      if (slytherin==ravenclaw)
        std::cout << "SHR";}  
    }
  
  //3
  if (gryffindor==ravenclaw){
    if (slytherin>hufflepuff){
      if (slytherin>gryffindor)
        std::cout << "S";
      if (hufflepuff==slytherin)
        std::cout << "HSR";}
    
    if (hufflepuff>slytherin){
      if (hufflepuff>gryffindor)
        std::cout << "H";
      if(slytherin==gryffindor)
        std::cout << "SGR";}
    
    if (hufflepuff==slytherin){
      if (hufflepuff>gryffindor)
        std::cout << "HS";
      if (hufflepuff==gryffindor)
        std::cout << "HSGR";} 
  }
  
  //outro
std::cout << "\nHey, I hope you enjoyed, and are happy with your results. I guess all that's left to say is good luck at Hogwarts!\n\n -Philip Eigen";
  
}
