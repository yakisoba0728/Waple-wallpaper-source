// Function: FUN_1404b2d80
// Addr: 1404b2d80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2d80(char *param_1,char param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte *unaff_RBX;
  
  param_2 = in_AH + param_2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(param_2,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(param_2,in_AL)) | in_AL;
  param_2 = param_2 + in_AL;
  uVar3 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT62(in_register_00000002,CONCAT11(param_2,in_AL)) = uVar3;
  if (param_2 == '\0') {
    *param_1 = *param_1 + in_AL;
    *unaff_RBX = *unaff_RBX | in_AL;
    *(char *)CONCAT62(in_register_00000002,(ushort)in_AL) =
         *(char *)CONCAT62(in_register_00000002,(ushort)in_AL) + (char)param_1;
    bRam172100005002d004 = in_AL;
    *(byte *)CONCAT62(in_register_00000002,(ushort)in_AL) =
         *(byte *)CONCAT62(in_register_00000002,(ushort)in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(param_2,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(param_2,in_AL)) + in_AL;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || in_AL == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(param_2,in_AL)) + 0x2c080017);
  *pbVar1 = *pbVar1 & 0x4b;
  *param_1 = *param_1 + param_2;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(param_2,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(param_2,in_AL)));
  *pcVar2 = *pcVar2 - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

