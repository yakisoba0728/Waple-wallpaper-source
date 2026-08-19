// Function: FUN_1404b12d8
// Addr: 1404b12d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b12d8(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 in_RAX;
  byte bVar7;
  longlong unaff_RDI;
  uint *puVar6;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  cVar3 = (char)in_RAX;
  uVar4 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                         CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar3,cVar3)) | 0xc640000;
  puVar6 = (uint *)(ulonglong)uVar4;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  uVar5 = *puVar6;
  pbVar1 = (byte *)(unaff_RDI + -0x4831ffeb);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar5 = (uVar4 | uVar5) + 0x49eb1000 + (uint)CARRY1(bVar2,bVar7);
  puVar6 = (uint *)(ulonglong)uVar5;
  cVar3 = (char)(uVar5 >> 8);
  *param_1 = *param_1 + cVar3;
  *(char *)puVar6 = (char)*puVar6 + (char)uVar5;
  *(char *)puVar6 = (char)*puVar6 + (char)param_2;
  *(char *)puVar6 = (char)*puVar6 + (char)param_2;
  *puVar6 = *puVar6 & uVar5;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                   CONCAT11((cVar3 + bVar7 + (char)param_1) * '\x02',(char)uVar5)) + 0x6d40000;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

