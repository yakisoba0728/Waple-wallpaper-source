// Function: FUN_1404b04d0
// Addr: 1404b04d0
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404b0503) overlaps instruction at (ram,0x0001404b0502)
    */

void FUN_1404b04d0(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  longlong in_RAX;
  byte *pbVar3;
  char unaff_BH;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *pcVar4;
  
  cVar1 = *(char *)(in_RAX + 1);
  uRam0000000147cd0fdb = (uint)in_RAX | uRam0000000147cd0fdb;
  pbVar3 = (byte *)(ulonglong)uRam0000000147cd0fdb;
  *pbVar3 = *pbVar3 ^ (byte)uRam0000000147cd0fdb;
  *param_1 = *param_1 + (char)(uRam0000000147cd0fdb >> 8);
  if (*param_1 < '\0') {
    LocalDescriptorTableRegister((short)uRam0000000147cd0fdb);
  }
  else {
    pbVar3[-0xc] = pbVar3[-0xc] + unaff_BH;
    *pbVar3 = *pbVar3 | (byte)uRam0000000147cd0fdb;
    pbVar3 = (byte *)(ulonglong)(uRam0000000147cd0fdb + 0xd0011e4);
    if (uRam0000000147cd0fdb + 0xd0011e4 == 0) {
      *param_1 = *param_1;
    }
  }
  cVar2 = (char)pbVar3;
  pbVar3[CONCAT71(unaff_00000021,unaff_SPL)] = pbVar3[CONCAT71(unaff_00000021,unaff_SPL)] + cVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pbVar3 = *pbVar3 + cVar2;
  cVar2 = cVar2 + param_2 + cVar1;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)pbVar3 >> 8),cVar2);
  pcVar4[CONCAT71(unaff_00000021,unaff_SPL)] = pcVar4[CONCAT71(unaff_00000021,unaff_SPL)] + cVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar4 = *pcVar4 + (char)param_1;
  *pcVar4 = *pcVar4 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

