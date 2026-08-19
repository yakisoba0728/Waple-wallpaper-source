// Function: FUN_1404b5be8
// Addr: 1404b5be8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5be8(char *param_1,byte *param_2,byte param_3,char *param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 in_RAX;
  byte bVar7;
  byte bVar8;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  longlong unaff_retaddr;
  byte *pbVar6;
  
  bVar8 = (byte)param_2;
  bVar7 = (byte)param_1;
  bVar4 = (byte)in_RAX;
  pbVar6 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar8,bVar4));
  param_2[0x1b001ae1] = param_2[0x1b001ae1] + bVar8;
  if (param_1 != (char *)0x0) {
    *pbVar6 = *pbVar6 + bVar4;
    *param_4 = *param_4 + '\b';
    *param_2 = *param_2 | bVar4;
    bVar1 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar7;
    uVar3 = unaff_RDI >> 8;
    unaff_RDI = CONCAT71((int7)((ulonglong)pbVar6 >> 8),(bVar4 - *pbVar6) - CARRY1(bVar1,bVar7)) &
                0xffffffff;
    uVar5 = in(0x1a);
    pbVar6 = (byte *)(CONCAT71((int7)uVar3,uVar5) & 0xffffffff);
    *(char *)(unaff_retaddr * 3) = *(char *)(unaff_retaddr * 3) + bVar8;
    *param_4 = *param_4;
    unaff_RBX = unaff_retaddr;
  }
  *param_2 = *param_2 | (byte)pbVar6;
  *pbVar6 = *pbVar6 + bVar7;
  if (-1 < (char)*pbVar6) {
    *(char *)(unaff_RDI + 0x7e001ae4) = *(char *)(unaff_RDI + 0x7e001ae4) + bVar8;
    out((short)param_2,(int)pbVar6);
    *(char *)(unaff_RBX + 0x4b) = *(char *)(unaff_RBX + 0x4b) - (byte)unaff_RBX;
    *param_1 = *param_1 + (char)((ulonglong)pbVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (undefined1 *)
           (CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),(ushort)(byte)unaff_RBX) * 3);
  *puVar2 = *puVar2;
  *param_4 = *param_4;
  *pbVar6 = *pbVar6 | param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

