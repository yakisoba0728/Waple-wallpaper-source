// Function: FUN_1404aba64
// Addr: 1404aba64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aba64(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  byte bVar3;
  byte bVar4;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  bVar3 = in_AL + 0x34;
  bVar2 = bVar3 + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3));
  bVar4 = bVar2 + (0xcb < in_AL);
  *(char *)(unaff_RSI + 0xf) =
       *(char *)(unaff_RSI + 0xf) +
       (CARRY1(bVar3,*(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar3))) ||
       CARRY1(bVar2,0xcb < in_AL));
  bVar2 = *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4));
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + bVar4;
  *(char *)(unaff_RSI + 0xf) = *(char *)(unaff_RSI + 0xf) + CARRY1(bVar2,bVar4);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) | bVar4;
  *(char *)(unaff_RBP + param_2) = *(char *)(unaff_RBP + param_2) + cVar5;
  *(char *)(param_2 + 0x78000f56) = *(char *)(param_2 + 0x78000f56) + in_AH * '\x02';
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + cVar5;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH * '\x02',bVar4)) + -0x43fff0aa);
  *pcVar1 = *pcVar1 + bVar4;
  lRam0000000078000f4e = unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

