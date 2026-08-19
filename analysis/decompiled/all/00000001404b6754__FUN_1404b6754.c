// Function: FUN_1404b6754
// Addr: 1404b6754
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6754(undefined1 *param_1,uint param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *in_RAX;
  uint *puVar7;
  longlong lVar9;
  longlong unaff_RBX;
  char *unaff_RSI;
  byte in_CF;
  bool in_ZF;
  char *pcVar8;
  
  if (!in_ZF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = ((int)in_RAX - *in_RAX) - (uint)in_CF;
  puVar7 = (uint *)(ulonglong)param_2;
  cVar4 = (char)(param_2 >> 8);
  if ((POPCOUNT(uVar5 & 0xff) & 1U) != 0) {
    *unaff_RSI = *unaff_RSI + cVar4;
    *param_4 = *param_4;
    *(char *)puVar7 = (char)*puVar7 + (char)param_2;
    pbVar1 = (byte *)((longlong)puVar7 + 0x7a);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + (byte)uVar5;
    uVar3 = (uint)CARRY1(bVar2,(byte)uVar5);
    iVar6 = (param_2 - *puVar7) - uVar3;
    if (iVar6 == 0) {
      iRam0000000000000000 =
           -(uint)(param_2 < *puVar7 || param_2 - *puVar7 < uVar3) - iRam0000000000000000;
      cVar4 = (char)iRam0000000000000000;
      pcVar8 = (char *)(ulonglong)
                       CONCAT22((short)((uint)iRam0000000000000000 >> 0x10),CONCAT11(0x24,cVar4));
      *param_1 = *param_1;
      *unaff_RSI = *unaff_RSI + (char)param_1;
      *pcVar8 = *pcVar8 + cVar4;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    lVar9 = func_0x0001614bb353((char)param_1,
                                CONCAT44(uVar5,iVar6) % (longlong)*(int *)(unaff_RBX * 2) &
                                0xffffffff);
    uVar5 = (uint)lVar9 | *(uint *)(lVar9 * 2) | (uint)&stack0x00000000;
    *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = CONCAT22((short)(param_2 >> 0x10),CONCAT11(cVar4 * '\x02',(char)param_2)) + 0x6d40000;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

