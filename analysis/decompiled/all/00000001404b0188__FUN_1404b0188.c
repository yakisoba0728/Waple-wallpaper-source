// Function: FUN_1404b0188
// Addr: 1404b0188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0188(int *param_1,byte *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined3 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  uint *puVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined6 uVar8;
  undefined4 unaff_EBX;
  
  uVar8 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  puVar5 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX));
  uVar4 = (uint)puVar5 | *puVar5;
  param_2[(longlong)param_1] = param_2[(longlong)param_1] + (byte)param_2;
  *param_2 = *param_2 >> 5 | *param_2 << 3;
  bVar6 = (byte)param_2 | bRam000000018b4b859b;
  *(char *)param_1 = (char)*param_1 + (char)(uVar4 >> 8);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  uVar3 = (undefined3)(uVar4 >> 8);
  cVar2 = (char)uVar4 * '\x02';
  bVar6 = bVar6 | bRam000000015555dca7;
  pcVar1 = (char *)((ulonglong)CONCAT31(uVar3,cVar2) * 2 + 0x1101004b);
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + CONCAT31(uVar3,cVar2);
  *(uint *)CONCAT62(uVar8,CONCAT11(uVar7,bVar6)) =
       *(uint *)CONCAT62(uVar8,CONCAT11(uVar7,bVar6)) &
       CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX * '\x02');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

