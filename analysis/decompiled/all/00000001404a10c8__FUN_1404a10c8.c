// Function: FUN_1404a10c8
// Addr: 1404a10c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a10c8(char *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *in_RAX;
  char cVar7;
  longlong unaff_RBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined2 in_DS;
  bool in_OF;
  int *piVar6;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  if (!in_OF) {
    iVar5 = (int)in_RAX + *in_RAX;
    *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
    bVar2 = *param_4;
    *param_4 = *param_4 + unaff_SPL;
    uVar3 = CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + '\x06' + CARRY1(bVar2,unaff_SPL));
    pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 2);
    *pcVar1 = *pcVar1 + (char)param_2;
    uVar4 = *(uint *)(ulonglong)uVar3;
    param_1[0x8e40400] = param_1[0x8e40400] + cVar7;
    pcVar1 = (char *)((ulonglong)(uVar3 | uVar4) - 0x60);
    *pcVar1 = *pcVar1 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar1 = (char *)(unaff_RBP + -0x624dfffd + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  uVar4 = (int)in_RAX + *in_RAX;
  piVar6 = (int *)(ulonglong)uVar4;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)piVar6 = (char)*piVar6 + (char)uVar4;
  *(char *)((longlong)piVar6 + -99) = *(char *)((longlong)piVar6 + -99) + cVar7;
  uVar4 = uVar4 + *piVar6;
  *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

