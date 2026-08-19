// Function: FUN_1404a7868
// Addr: 1404a7868
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7868(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  byte *pbVar5;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte in_CF;
  
  uVar4 = in_EAX + 0xd000c64 + (uint)in_CF;
  uVar4 = (uVar4 | *(uint *)(ulonglong)uVar4) + 0x90000a34;
  pbVar5 = (byte *)(ulonglong)uVar4;
  pbVar1 = pbVar5 + 0x7c000a3c;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  bVar3 = (byte)uVar4;
  if (CARRY1(bVar2,unaff_BL) || *pbVar1 == 0) {
    *param_1 = *param_1 + (char)(uVar4 >> 8);
    *pbVar5 = *pbVar5 + bVar3;
    pbVar5[-0x67fff5c4] = pbVar5[-0x67fff5c4] + (char)param_2;
    unaff_RDI[unaff_RSI * 2 + 0x4a] = unaff_RDI[unaff_RSI * 2 + 0x4a] + unaff_BH;
    *param_1 = *param_1 + bVar3;
    *unaff_RDI = *unaff_RDI + (char)param_1;
    *(uint *)(pbVar5 + in_FS_OFFSET) = *(uint *)(pbVar5 + in_FS_OFFSET) | uVar4;
    sysenter();
    *pbVar5 = *pbVar5 | bVar3;
    rdmsr((int)param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar5 = *pbVar5 + bVar3;
  *(char *)(unaff_RSI + -0x21fff5af) =
       *(char *)(unaff_RSI + -0x21fff5af) + (char)((ulonglong)param_1 >> 8);
  bVar2 = *pbVar5;
  unaff_RDI[0x4a] = unaff_RDI[0x4a] << 1;
  *param_1 = *param_1 + (bVar3 | bVar2);
  *param_2 = *param_2 + (char)param_2;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

