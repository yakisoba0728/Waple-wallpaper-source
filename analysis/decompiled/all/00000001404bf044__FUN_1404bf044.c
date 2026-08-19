// Function: FUN_1404bf044
// Addr: 1404bf044
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf044(char *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  uint *puVar4;
  char cVar6;
  char *unaff_RBX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char *pcVar5;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX | (byte)*in_RAX;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar6 + bVar2,bVar2));
  uVar3 = (uint)puVar4 | *puVar4;
  pcVar5 = (char *)(ulonglong)uVar3;
  param_1[param_2] = param_1[param_2] + cVar6;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)param_2;
  pcVar5[(longlong)param_1] = pcVar5[(longlong)param_1] + cVar6;
  *pcVar5 = *pcVar5 + (char)uVar3;
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  unaff_RDI[1] = unaff_RSI[1];
  *pcVar5 = *pcVar5 + (char)param_2;
  pbVar1 = (byte *)(param_2 + 4);
  bVar2 = (byte)((uint)(iRam000000000801004b + 0x801004b) >> 8);
  *pbVar1 = *pbVar1 | bVar2;
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || *pbVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar2;
  *unaff_RBX = *unaff_RBX + bVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

