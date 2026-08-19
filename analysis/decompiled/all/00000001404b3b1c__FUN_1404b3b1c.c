// Function: FUN_1404b3b1c
// Addr: 1404b3b1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3b1c(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte unaff_BL;
  char unaff_BH;
  byte *unaff_RSI;
  
  *(char *)param_2 = (char)*param_2 - unaff_BH;
  *param_4 = *param_4;
  *param_2 = *param_2 | in_EAX;
  *param_1 = *param_1 + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) = (char)param_1;
  bVar1 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar4 = (byte)in_EAX;
  bVar3 = *(char *)CONCAT44(in_register_00000004,in_EAX) - bVar4;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) = bVar3 - CARRY1(bVar1,unaff_BL);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       (*(char *)CONCAT44(in_register_00000004,in_EAX) - bVar4) -
       (bVar2 < bVar4 || bVar3 < CARRY1(bVar1,unaff_BL));
  *param_4 = *param_4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

