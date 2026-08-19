// Function: FUN_1404a24b4
// Addr: 1404a24b4
// Size: 1 bytes


void FUN_1404a24b4(char *param_1,uint *param_2)

{
  int iVar1;
  undefined3 uVar2;
  char cVar3;
  undefined8 in_RAX;
  uint *puVar4;
  uint unaff_EBX;
  char *unaff_RDI;
  char *pcVar5;
  
  *param_2 = *param_2 & unaff_EBX;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(ushort)(byte)in_RAX);
  iVar1 = ((uint)puVar4 | *puVar4) + 0x2421087e;
  uVar2 = (undefined3)
          ((uint)(CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + -0xc) + 0x3f000a54) >> 8);
  cVar3 = in(0x23);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  *param_1 = *param_1 + -8;
  *pcVar5 = *pcVar5 + cVar3;
  *unaff_RDI = *unaff_RDI + (char)(unaff_EBX >> 8);
  cVar3 = in(0x23);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  *param_1 = *param_1 + -8;
  *pcVar5 = *pcVar5 + (char)param_1;
  *pcVar5 = *pcVar5 + cVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

