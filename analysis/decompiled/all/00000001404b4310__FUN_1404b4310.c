// Function: FUN_1404b4310
// Addr: 1404b4310
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4310(char *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte in_AL;
  byte bVar4;
  char in_AH;
  undefined6 in_register_00000002;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  
  *(uint *)(param_1 + -0x3b56fffa) = *(uint *)(param_1 + -0x3b56fffa) & unaff_EBP;
  bVar4 = in_AL & *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar3 = in_AH + (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,bVar4)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,bVar4)) & bVar4;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(bVar3,bVar4)) +
                   CONCAT44(unaff_0000002c,unaff_EBP));
  *pbVar1 = *pbVar1 | bVar3;
  out((short)param_2,bVar4);
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,bVar4));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar3,bVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,bVar4)) - bVar4;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,0xee)) =
       (*(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,0xee)) + '\x12') - (bVar2 < bVar4);
  param_2[0x4b] = param_2[0x4b] ^ 0xee;
  *param_1 = *param_1 + bVar3;
  *param_2 = *param_2 | 0xee;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,0xee)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar3,0xee)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

