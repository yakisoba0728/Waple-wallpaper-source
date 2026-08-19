// Function: FUN_1404a248c
// Addr: 1404a248c
// Size: 1 bytes


void FUN_1404a248c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined3 uVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  uint *puVar6;
  char cVar8;
  byte bVar9;
  undefined6 uVar10;
  char unaff_BH;
  char *pcVar7;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)param_1;
  puVar6 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX));
  uVar5 = (uint)puVar6 | *puVar6;
  pcVar7 = (char *)(ulonglong)uVar5;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  pcVar7[param_1] = pcVar7[param_1] + bVar9;
  *pcVar7 = *pcVar7 + bVar9;
  uVar1 = uVar5 + 0x21004a;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  bVar9 = (byte)((ulonglong)param_1 >> 8) ^ bVar9;
  uVar1 = CONCAT22((short)(uVar5 + 0x1a420094 >> 0x10),(ushort)(byte)(uVar5 + 0x1a420094));
  iVar2 = (uVar1 | *(uint *)(ulonglong)uVar1) + 0x2421087e;
  uVar3 = (undefined3)
          ((uint)(CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -0xc) + 0x3f000a54) >> 8);
  cVar4 = in(0x23);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) + -8;
  *pcVar7 = *pcVar7 + cVar4;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + unaff_BH;
  cVar4 = in(0x23);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar3,cVar4);
  *(char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(bVar9,cVar8)) + -8;
  *pcVar7 = *pcVar7 + cVar8;
  *pcVar7 = *pcVar7 + cVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

