// Function: FUN_1404cac10
// Addr: 1404cac10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404cac22) */

void FUN_1404cac10(char *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  uint *in_RAX;
  char unaff_R12B;
  bool in_OF;
  uint *puVar3;
  
  if (in_OF) {
    uVar2 = (uint)in_RAX ^ *in_RAX;
    cVar1 = (char)uVar2 + -0x55;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
    puVar3 = (uint *)(ulonglong)uVar2;
    *param_1 = *param_1 + unaff_R12B;
    *(char *)puVar3 = (char)*puVar3 + cVar1;
    *(char *)(puVar3 + -0xf) = (char)puVar3[-0xf] + param_2;
    uVar2 = uVar2 ^ *puVar3 | 0x5000a74;
    *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

