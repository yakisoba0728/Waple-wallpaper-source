// Function: FUN_1404d1dc8
// Addr: 1404d1dc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1dc8(byte *param_1,char *param_2)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *param_1 = *param_1 >> 1 | CARRY1(bVar1,(byte)in_EAX) << 7;
  *param_1 = *param_1 + unaff_BL;
  *param_2 = *param_2 + (char)param_2;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

