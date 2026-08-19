// Function: FUN_1404bf28c
// Addr: 1404bf28c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf28c(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint3 uVar3;
  byte bVar4;
  uint uVar5;
  char cVar8;
  uint *puVar6;
  ulonglong uVar7;
  char cVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  char *unaff_RBX;
  char unaff_SPL;
  byte in_CF;
  bool bVar12;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar9 = (char)((ulonglong)param_2 >> 8);
  *(int *)((longlong)param_1 * 2) = *(int *)((longlong)param_1 * 2) + (int)param_2 + (uint)in_CF;
  param_1[0x100026b2] = param_1[0x100026b2] + '&';
  bVar12 = SCARRY1((byte)uRam000000000021004b,'K');
  cVar8 = (byte)uRam000000000021004b + 'K';
  uRam000000000021004b = CONCAT31(uRam000000000021004b._1_3_,cVar8);
  if (!bVar12) {
    param_1[0x100026b2] = param_1[0x100026b2] + '&';
    puVar6 = (uint *)CONCAT62(0x21,CONCAT11(cVar9 + ((byte)uRam000000000021004b | 0x4b),
                                            (byte)uRam000000000021004b) | 0x4b);
    uVar7 = (ulonglong)((uint)puVar6 | *puVar6);
    param_1[CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,0x26)))] =
         param_1[CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,0x26)))] + cVar9;
    *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + '&';
    param_1[uVar7] = param_1[uVar7] + cVar9;
    pcVar1 = (char *)(uVar7 - 0x4e);
    *pcVar1 = *pcVar1 + cVar9;
    param_1[0x100026b2] = param_1[0x100026b2] + '&';
    pbVar2 = (byte *)(CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,0x26))) + 4);
    *pbVar2 = *pbVar2 | (byte)((uint)(iRam000000000801004b + 0x801004b) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (uint *)CONCAT62(0x21,CONCAT11(cVar9 * '\x02',cVar8) & 0xff4b | 0x4b);
  uVar5 = (uint)puVar6 | *puVar6;
  bVar4 = (byte)uVar5;
  cVar8 = (char)(uVar5 >> 8) + bVar4;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(cVar8,bVar4));
  uVar3 = (uint3)(uVar5 >> 8);
  uVar7 = (ulonglong)CONCAT31(uVar3,bVar4 | *(byte *)(ulonglong)uVar5);
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + '&';
  param_1[uVar7] = param_1[uVar7] + cVar9;
  pcVar1 = (char *)(uVar7 - 0x2fffd950);
  *pcVar1 = *pcVar1 + cVar9;
  pcVar1 = (char *)(CONCAT71((uint7)uVar3,0x26) + 0x15);
  *pcVar1 = *pcVar1 + '&';
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RBX = *unaff_RBX + cVar8;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

