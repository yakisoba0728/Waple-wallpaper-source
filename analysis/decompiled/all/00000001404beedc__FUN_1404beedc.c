// Function: FUN_1404beedc
// Addr: 1404beedc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beedc(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char cVar6;
  undefined8 in_RAX;
  byte *pbVar5;
  longlong lVar7;
  char *pcVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  char in_CF;
  
  uVar4 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(*(char *)(CONCAT71(unaff_00000019,unaff_BL) + param_1) - in_CF,
                                 (char)in_RAX)) + 0x50000a34;
  pcVar8 = (char *)(ulonglong)uVar4;
  *(char *)(unaff_RDI + -0x27ffd964) = *(char *)(unaff_RDI + -0x27ffd964) + unaff_BL;
  lVar7 = param_1 + -1;
  cVar2 = (char)uVar4;
  if (lVar7 == 0) {
    cVar6 = (char)(uVar4 >> 8);
    cRam0000000000000000 = cRam0000000000000000 + cVar6;
    *pcVar8 = *pcVar8 + cVar2;
    pcVar8[-100] = pcVar8[-100] + (char)param_2;
    *(char *)(unaff_RDI + -0x27ffd964) = *(char *)(unaff_RDI + -0x27ffd964) + unaff_BL;
    lVar7 = param_1 + -2;
    if (lVar7 == 0) {
      cRam0000000000000000 = cRam0000000000000000 + cVar6;
      *unaff_RSI = *unaff_RSI + cVar2;
      *pcVar8 = *pcVar8 + cVar2;
      cVar2 = in(0xc);
      uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar2);
      pcVar8 = (char *)(ulonglong)uVar4;
      *pcVar8 = *pcVar8 + cVar2;
      uVar4 = uVar4 | *(uint *)(pcVar8 + in_FS_OFFSET);
      pbVar5 = (byte *)(ulonglong)uVar4;
      *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8);
      pbVar5[-100] = pbVar5[-100] + (char)param_2;
      *(char *)(unaff_RDI + -0x27ffd964) = *(char *)(unaff_RDI + -0x27ffd964) + unaff_BL;
      pcVar8 = (char *)(param_1 + -3);
      bVar3 = (byte)uVar4;
      if (pcVar8 == (char *)0x0) {
        *pbVar5 = *pbVar5 | bVar3;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      pcVar1 = (char *)(unaff_RDI + 0x49 + unaff_RBP * 8);
      *pcVar1 = *pcVar1 + (char)pcVar8;
      *pcVar8 = *pcVar8 + bVar3;
      unaff_RSI[(longlong)param_2] = unaff_RSI[(longlong)param_2] + (char)pcVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    out((short)param_2,uVar4);
    *param_4 = *param_4 + -8;
    *pcVar8 = *pcVar8 + cVar2;
    pcVar8[-0x62] = pcVar8[-0x62] + cVar2;
    *(char *)(param_1 + 0x4c00269d) = *(char *)(param_1 + 0x4c00269d) + (char)lVar7;
  }
  out((short)param_2,uVar4);
  *param_4 = *param_4 + -8;
  *pcVar8 = *pcVar8 + (char)lVar7;
  *pcVar8 = *pcVar8 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

