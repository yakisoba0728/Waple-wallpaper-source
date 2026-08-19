// Function: FUN_1404c59d8
// Addr: 1404c59d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c5a61) */

void FUN_1404c59d8(char *param_1,undefined8 param_2)

{
  undefined3 uVar1;
  byte bVar2;
  uint uVar3;
  int *in_RAX;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  undefined6 uVar7;
  byte *unaff_RSI;
  undefined4 unaff_EDI;
  undefined4 unaff_0000003c;
  byte in_CF;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (int)in_RAX + *in_RAX + (uint)in_CF | 0x9e00bf0;
  pcVar4 = (char *)(ulonglong)uVar3;
  *(char *)CONCAT44(unaff_0000003c,unaff_EDI) =
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) << 1 |
       *(char *)CONCAT44(unaff_0000003c,unaff_EDI) < '\0';
  cVar5 = (char)param_2 + *pcVar4;
  *pcVar4 = *pcVar4 + (char)(uVar3 >> 8);
  *unaff_RSI = *unaff_RSI >> 1;
  pcVar4[0x9000000] = pcVar4[0x9000000] + (byte)uVar3;
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (byte)uVar3 | *(byte *)((longlong)pcVar4 * 2);
  bVar6 = (byte)((ulonglong)param_2 >> 8) |
          *(byte *)(CONCAT44(unaff_0000003c,unaff_EDI) + (ulonglong)CONCAT31(uVar1,bVar2));
  *(char *)CONCAT62(uVar7,CONCAT11(bVar6,cVar5)) =
       *(char *)CONCAT62(uVar7,CONCAT11(bVar6,cVar5)) + (char)param_1;
  bVar2 = bVar2 ^ *unaff_RSI;
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,bVar2);
  *param_1 = *param_1 + bVar2;
  *pcVar4 = *pcVar4 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

