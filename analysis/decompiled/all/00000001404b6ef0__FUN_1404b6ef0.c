// Function: FUN_1404b6ef0
// Addr: 1404b6ef0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6ef0(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined4 *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x7ffe3f4);
  *pcVar1 = *pcVar1 + unaff_BL;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  *param_4 = *param_4 + ((byte)in_EAX | 0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

