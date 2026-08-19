// Function: FUN_1404d2930
// Addr: 1404d2930
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2930(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char cVar3;
  char *unaff_RBP;
  char in_R11B;
  
  cVar3 = (char)((ulonglong)param_1 >> 8) - *param_2;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar3;
  *unaff_RBP = *unaff_RBP - (char)param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  cVar3 = cVar3 - *param_2;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar3;
  *unaff_RBP = *unaff_RBP - (char)param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  *param_2 = *param_2 + cVar3 + CARRY1(bVar1,bVar2);
  unaff_RBP[CONCAT44(in_register_00000004,in_EAX)] =
       unaff_RBP[CONCAT44(in_register_00000004,in_EAX)] + (char)param_2;
  *param_4 = *param_4 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

