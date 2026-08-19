// Function: FUN_1404a555c
// Addr: 1404a555c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5522) overlaps instruction at (ram,0x0001404a5521)
    */

void FUN_1404a555c(char *param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  undefined6 uVar8;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  cVar6 = (char)param_2;
  cVar4 = (char)param_1;
  *in_RAX = *in_RAX - cVar4;
  cVar5 = (char)((ulonglong)param_1 >> 8);
  param_1[0x70000828] = param_1[0x70000828] + cVar5;
  *param_1 = *param_1 + -8;
  cVar1 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  in_RAX[-0x56fff7d8] = in_RAX[-0x56fff7d8] + cVar6;
  *in_RAX = *in_RAX - cVar4;
  in_RAX[0x54] = in_RAX[0x54] + bVar7;
  *param_1 = *param_1 + -8;
  *unaff_RSI = *unaff_RSI + cVar1;
  *in_RAX = *in_RAX + cVar1;
  if (*in_RAX != '\0') {
    *in_RAX = *in_RAX + cVar1;
    pcVar3 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),in_RAX[in_FS_OFFSET]);
    *(char *)((longlong)param_1 * 5) = *(char *)((longlong)param_1 * 5) + cVar6;
    *pcVar3 = *pcVar3 - cVar4;
    param_1[0x70000828] = param_1[0x70000828] + cVar5;
    *param_1 = *param_1 + -0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (int)in_RAX + 0x3600470;
  *param_2 = *param_2 ^ (byte)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (byte)uVar2;
  *(int *)param_2 = *(int *)param_2 + (int)param_1;
  bVar7 = bVar7 | unaff_RSI[(longlong)param_1];
  cVar1 = *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6));
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + cVar4;
  if (SCARRY1(cVar1,cVar4)) {
    uVar2 = uVar2 | 0x8af42b00;
  }
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

