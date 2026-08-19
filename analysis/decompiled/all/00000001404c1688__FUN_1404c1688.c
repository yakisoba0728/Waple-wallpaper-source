// Function: FUN_1404c1688
// Addr: 1404c1688
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1688(uint *param_1,char *param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  char in_AL;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar7;
  undefined6 uVar8;
  char unaff_BL;
  byte *unaff_RSI;
  int *unaff_RDI;
  char *pcVar6;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)param_2;
  *param_2 = *param_2 + in_AL;
  cRam0000000006100028 = cRam0000000006100028 + '(';
  *(char *)param_1 = (char)*param_1 + unaff_BL;
  *param_1 = *param_1 | 0x6100028;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
  cRam0000000006100028 = cRam0000000006100028 + '(';
  *(char *)CONCAT62(uVar8,CONCAT11(0x2b,bVar7)) =
       *(char *)CONCAT62(uVar8,CONCAT11(0x2b,bVar7)) + param_3;
  cRam0000000002600028 = cRam0000000002600028 + '(';
  *(char *)param_1 = (char)*param_1 + unaff_BL;
  bVar1 = *(byte *)CONCAT62(uVar8,CONCAT11(0x2b,bVar7));
  *(char *)CONCAT62(uVar8,CONCAT11(0x2b,bVar7)) =
       *(char *)CONCAT62(uVar8,CONCAT11(0x2b,bVar7)) + (char)param_1;
  puVar5 = (uint *)CONCAT71(0x26000,(bVar1 | 0x28) ^ *unaff_RSI);
  *(byte *)((longlong)puVar5 + -0x4a) = *(byte *)((longlong)puVar5 + -0x4a) ^ bVar7;
  uVar3 = (uint)puVar5 - *puVar5;
  uVar4 = (uint)((uint)puVar5 < *puVar5);
  uVar2 = uVar3 + 0xe148004c;
  uVar4 = uVar2 + uVar4 + 0x1605004c + (uint)(0x1eb7ffb3 < uVar3 || CARRY4(uVar2,uVar4));
  pcVar6 = (char *)(ulonglong)uVar4;
  *unaff_RSI = *unaff_RSI + param_3;
  *pcVar6 = *pcVar6 + (char)uVar4;
  *unaff_RDI = (*unaff_RDI - (int)param_1) - (uint)CARRY1(bVar7,*(byte *)((longlong)pcVar6 * 2));
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

