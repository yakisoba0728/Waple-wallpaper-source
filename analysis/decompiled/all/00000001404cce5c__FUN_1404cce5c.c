// Function: FUN_1404cce5c
// Addr: 1404cce5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cce5c(char *param_1,char param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  char *in_RAX;
  byte *pbVar3;
  char unaff_BL;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  
  pcVar1 = (char *)(unaff_RBP + 0x4c + (longlong)param_1 * 8);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x27ffcab3] = in_RAX[-0x27ffcab3] + param_2;
  *param_1 = *param_1 + (char)in_RAX;
  uVar2 = SegmentLimit(*(undefined4 *)((ulonglong)in_RAX ^ 0x4ccd5c00));
  pbVar3 = (byte *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),(uint)(ushort)uVar2);
  GlobalDescriptorTableRegister(*unaff_RSI);
  *pbVar3 = *pbVar3 + (char)param_1;
  *pbVar3 = *pbVar3 ^ (byte)uVar2;
  *param_1 = *param_1 + (char)((uint3)uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

