// Function: FUN_1404a0c18
// Addr: 1404a0c18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0c18(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  char in_CF;
  uint *puVar5;
  
  cVar2 = (char)in_RAX + '\v' + in_CF;
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       (char)((ulonglong)in_RAX >> 8);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = cVar2;
  *(char *)(puVar5 + -0x1e) = (char)puVar5[-0x1e] + unaff_BH;
  iVar3 = (uint)puVar5 + *puVar5;
  cVar2 = (char)iVar3 + '\v' + CARRY4((uint)puVar5,*puVar5);
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),cVar2) * 2);
  *pcVar1 = *pcVar1 + (char)param_1;
  uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                   CONCAT11(((char)((uint)iVar3 >> 8) + (char)((ulonglong)param_2 >> 8)) * '\x02',
                            cVar2)) + 0x6d40000;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

