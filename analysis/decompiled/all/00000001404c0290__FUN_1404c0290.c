// Function: FUN_1404c0290
// Addr: 1404c0290
// Size: 1 bytes


void FUN_1404c0290(char *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  char *in_RAX;
  byte *pbVar3;
  byte bVar4;
  char unaff_BL;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  out(0x20,(int)in_RAX);
  cVar2 = (char)in_RAX;
  *in_RAX = *in_RAX - cVar2;
  pbVar3 = (byte *)(ulonglong)(uint)(int)(short)in_RAX;
  piVar1 = (int *)((longlong)pbVar3 * 2 + 0x21);
  *piVar1 = *piVar1 + (int)param_1;
  *pbVar3 = *pbVar3 + cVar2;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *pbVar3 = *pbVar3 & bVar4;
  *pbVar3 = *pbVar3 & bVar4;
  pbVar3[0x21004c01] = pbVar3[0x21004c01] + unaff_BL;
  *param_2 = *param_2 + cVar2;
  *pbVar3 = *pbVar3 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

