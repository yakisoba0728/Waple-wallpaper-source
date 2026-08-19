// Function: FUN_1404b3674
// Addr: 1404b3674
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3674(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int *in_RAX;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined6 uVar8;
  char unaff_BH;
  longlong unaff_RBP;
  int unaff_EDI;
  char *pcVar5;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  uVar6 = (undefined1)param_2;
  uVar4 = ((int)in_RAX - *in_RAX) - (uint)((byte)in_RAX < 0x88);
  pcVar5 = (char *)(ulonglong)uVar4;
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)(pcVar5 + unaff_RBP * 2);
    bVar2 = *pbVar1;
    bVar3 = (byte)(uVar4 >> 8);
    *pbVar1 = *pbVar1 + bVar3;
    uVar4 = (uVar4 + 0xb8cbe000) - (uint)CARRY1(bVar2,bVar3);
    pcVar5 = (char *)(ulonglong)uVar4;
    *pcVar5 = *pcVar5 + (char)(uVar4 >> 8);
    *(int *)((longlong)pcVar5 * 2) = *(int *)((longlong)pcVar5 * 2) + unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar2 = *param_1;
  bVar3 = (byte)uVar4;
  *param_1 = *param_1 + bVar3;
  *pcVar5 = (*pcVar5 - bVar3) - CARRY1(bVar2,bVar3);
  func_0x0001189936c4();
  *(char *)CONCAT62(uVar8,CONCAT11(uVar7,uVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(uVar7,uVar6)) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

