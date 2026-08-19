// Function: FUN_1404b94d4
// Addr: 1404b94d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b94d4(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined7 uVar6;
  char unaff_BL;
  char unaff_BH;
  uint *puVar5;
  
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX + unaff_BH;
  puVar5 = (uint *)CONCAT71(uVar6,cVar2);
  *puVar5 = *puVar5 | (uint)puVar5;
  bVar3 = cVar2 + (char)((ulonglong)param_1 >> 8);
  puVar5 = (uint *)CONCAT71(uVar6,(bVar3 | *(byte *)CONCAT71(uVar6,bVar3)) + unaff_BL);
  uVar4 = (uint)puVar5 | *puVar5;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)param_1) - 0x57fffff3
                   );
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

