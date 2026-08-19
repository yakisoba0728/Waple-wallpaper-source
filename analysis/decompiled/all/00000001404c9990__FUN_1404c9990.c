// Function: FUN_1404c9990
// Addr: 1404c9990
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9990(char *param_1,byte *param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  byte *unaff_RDI;
  char unaff_R12B;
  
  cVar4 = (char)((ulonglong)param_1 >> 8);
  bVar3 = (byte)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & unaff_EBX;
  *(byte *)CONCAT62(in_register_00000002,(ushort)in_AL) =
       *(char *)CONCAT62(in_register_00000002,(ushort)in_AL) + bVar3;
  bVar2 = in_AL ^ 0xff;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) - 0x25ffcddd);
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) + 0x21004c98);
  *pcVar1 = *pcVar1 + cVar4;
  *param_2 = *param_2 | bVar2;
  *(byte *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) =
       *(char *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) + bVar3;
  do {
  } while (*(char *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) == '\0');
  cVar6 = (char)unaff_EBX;
  cVar5 = (char)param_2 + cVar6 * '\x02';
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + -0x673bffce);
  *pcVar1 = *pcVar1 + bVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) =
       *(char *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) + bVar2;
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + -0x673bffce);
  *pcVar1 = *pcVar1 + bVar2;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) =
       *(char *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) + bVar2;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) - 0x25ffcddd);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xff) + 0x19004c98);
  *pcVar1 = *pcVar1 + cVar4;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) = *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) ^ bVar3;
  *unaff_RDI = *unaff_RDI + cVar6;
  *unaff_RDI = *unaff_RDI + cVar6;
  *(char *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xf) =
       *(char *)(CONCAT62(in_register_00000002,(ushort)in_AL) ^ 0xf) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

