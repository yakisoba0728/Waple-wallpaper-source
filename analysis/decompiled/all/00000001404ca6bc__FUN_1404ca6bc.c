// Function: FUN_1404ca6bc
// Addr: 1404ca6bc
// Size: 1 bytes


void FUN_1404ca6bc(char *param_1,char *param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  bVar2 = in_AL ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar2 = bVar2 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2));
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(0xa5,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0xa5,bVar2)) + bVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(0xa5,bVar2)) + -0xd);
  *pcVar1 = *pcVar1 + bVar2;
  bVar2 = bVar2 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(0xa5,bVar2));
  bVar2 = bVar2 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(0xa5,bVar2));
  *(ulonglong *)((ulonglong)(uint)((int)&stack0x00000000 + (int)unaff_RSI) - 8) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)(in_IF & 1) * 0x200 |
       (ulonglong)(in_TF & 1) * 0x100 | (ulonglong)((char)bVar2 < '\0') * 0x80 |
       (ulonglong)(bVar2 == 0) * 0x40 | (ulonglong)(in_AF & 1) * 0x10 |
       (ulonglong)((POPCOUNT(bVar2) & 1U) == 0) * 4 | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)param_1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(0xa5,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0xa5,bVar2)) + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

