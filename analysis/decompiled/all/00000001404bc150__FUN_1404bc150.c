// Function: FUN_1404bc150
// Addr: 1404bc150
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc150(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  undefined4 uVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  byte *unaff_RBX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RBX = *unaff_RBX >> 1 | *unaff_RBX << 7;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(unaff_RSI + 0x6d) = *(char *)(unaff_RSI + 0x6d) + (char)param_1;
  bVar2 = in_AL & *(byte *)CONCAT71(in_register_00000001,in_AL);
  while (param_1 != 0) {
    param_1 = param_1 + -1;
    uVar1 = in(param_2);
    *unaff_RDI = uVar1;
    unaff_RDI = unaff_RDI + 1;
  }
  bVar2 = bVar2 & *(byte *)CONCAT71(in_register_00000001,bVar2);
  *unaff_RBX = *unaff_RBX >> 1 | *unaff_RBX << 7;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  bVar2 = bVar2 & *(byte *)CONCAT71(in_register_00000001,bVar2);
  uVar1 = in(param_2);
  unaff_RDI[1] = uVar1;
  bVar2 = bVar2 & *(byte *)CONCAT71(in_register_00000001,bVar2);
  *param_4 = *param_4 + -0x10;
  *(char *)(unaff_RSI + 1) = *(char *)(unaff_RSI + 1) + bVar2;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

