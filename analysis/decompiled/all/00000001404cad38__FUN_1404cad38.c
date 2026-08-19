// Function: FUN_1404cad38
// Addr: 1404cad38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cad38(char param_1)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  uint *puVar3;
  char *pcVar4;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar1 = (char)in_RAX + (char)*in_RAX;
  puVar3 = (uint *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar1,cVar1))
                                  >> 8),cVar1);
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) = *(char *)CONCAT44(unaff_0000001c,unaff_EBX) >> 0x13;
  *(char *)(unaff_RDI + 0x3d) = *(char *)(unaff_RDI + 0x3d) + cVar1;
  uVar2 = (uint)puVar3 ^ *puVar3;
  cVar1 = (char)uVar2 * '\x02';
  uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
  *(char *)(unaff_RDI + 0x3d) = *(char *)(unaff_RDI + 0x3d) + cVar1;
  pcVar4 = (char *)(ulonglong)(uVar2 ^ *(uint *)(ulonglong)uVar2);
  *pcVar4 = *pcVar4 + (char)unaff_EBX;
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_EBX;
  pcVar4[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
       pcVar4[CONCAT44(unaff_00000034,unaff_ESI) * 8] + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

