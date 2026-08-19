// Function: FUN_1404b97c0
// Addr: 1404b97c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b97c0(undefined8 param_1,byte *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  
  uVar2 = *(undefined4 *)(unaff_RDI + 0x1f);
  pbVar3 = (byte *)(unaff_RSI & 0xffffffff);
  *param_4 = *param_4;
  *param_2 = *param_2 | (byte)pbVar3;
  bVar1 = *pbVar3;
  bVar4 = (byte)uVar2;
  *pbVar3 = *pbVar3 + bVar4;
  pbVar3[in_FS_OFFSET] = (pbVar3[in_FS_OFFSET] - (byte)pbVar3) - CARRY1(bVar1,bVar4);
  *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

