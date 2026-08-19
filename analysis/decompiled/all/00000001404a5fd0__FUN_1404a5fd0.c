// Function: FUN_1404a5fd0
// Addr: 1404a5fd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5fd0(char *param_1,undefined8 param_2)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  char unaff_SPL;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar1 = (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) >> 1 |
       *(char *)CONCAT44(in_register_00000004,in_EAX) << 7;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) >> 1 |
       *(char *)CONCAT44(in_register_00000004,in_EAX) << 7;
  param_1[CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                   CONCAT11((char)((ulonglong)param_2 >> 8) + cVar1,(char)param_2))] =
       param_1[CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                        CONCAT11((char)((ulonglong)param_2 >> 8) + cVar1,(char)param_2))] + unaff_BH
  ;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)param_1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

