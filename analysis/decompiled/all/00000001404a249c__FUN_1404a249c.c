// Function: FUN_1404a249c
// Addr: 1404a249c
// Size: 1 bytes


void FUN_1404a249c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined3 uVar3;
  char cVar4;
  char *in_RAX;
  char cVar6;
  byte bVar7;
  undefined6 uVar8;
  char unaff_BH;
  char *pcVar5;
  
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)param_1;
  uVar1 = (int)in_RAX + 0x21004a;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  bVar7 = (byte)((ulonglong)param_1 >> 8) ^ (byte)((ulonglong)param_2 >> 8);
  iVar2 = (int)in_RAX + 0x1a420094;
  uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),(ushort)(byte)iVar2);
  iVar2 = (uVar1 | *(uint *)(ulonglong)uVar1) + 0x2421087e;
  uVar3 = (undefined3)
          ((uint)(CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -0xc) + 0x3f000a54) >> 8);
  cVar4 = in(0x23);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + -8;
  *pcVar5 = *pcVar5 + cVar4;
  *in_RAX = *in_RAX + unaff_BH;
  cVar4 = in(0x23);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) =
       *(char *)CONCAT62(uVar8,CONCAT11(bVar7,cVar6)) + -8;
  *pcVar5 = *pcVar5 + cVar6;
  *pcVar5 = *pcVar5 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

