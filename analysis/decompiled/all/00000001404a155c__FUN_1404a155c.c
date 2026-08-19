// Function: FUN_1404a155c
// Addr: 1404a155c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a155c(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  longlong in_RAX;
  char unaff_BL;
  char unaff_SPL;
  
  pcVar1 = (char *)(in_RAX + param_1);
  *pcVar1 = *pcVar1 + (char)((ushort)param_2 >> 8);
  param_1 = param_1 + -1;
  if (param_1 != 0 && *pcVar1 != '\0') {
    while( true ) {
      iVar3 = in(param_2);
      *param_4 = *param_4 + unaff_SPL;
      pbVar4 = (byte *)(ulonglong)(iVar3 + 0x74050002U);
      bVar2 = (byte)(iVar3 + 0x74050002U);
      *pbVar4 = *pbVar4 | bVar2;
      param_1 = param_1 + -1;
      if (param_1 == 0 || *pbVar4 == 0) break;
      pbVar4[0x210049ed] = pbVar4[0x210049ed] + (char)((ulonglong)param_1 >> 8);
      *pbVar4 = *pbVar4 + bVar2;
      cRam00000000e84a1920 = cRam00000000e84a1920 + unaff_BL;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

