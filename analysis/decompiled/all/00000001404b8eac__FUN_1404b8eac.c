// Function: FUN_1404b8eac
// Addr: 1404b8eac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8eac(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  byte *in_RAX;
  char unaff_BL;
  char unaff_BH;
  int unaff_ESP;
  int *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  float10 in_ST0;
  uint *puVar5;
  
  *in_RAX = *in_RAX | (byte)param_2;
  cVar3 = (char)in_RAX;
  *(char *)param_1 = (char)*param_1 + cVar3;
  *(char *)(in_FS_OFFSET + 0x14ec3dcbb) = (char)param_1;
  *(char *)(param_1 + 0x1a) = (char)param_1[0x1a] + (char)param_1;
  LocalDescriptorTableRegister(*(undefined2 *)param_2);
  *param_1 = *param_1 + unaff_ESP;
  cVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + cVar3;
  if (!SCARRY1(cVar2,cVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (byte)param_2;
  uVar4 = (uRam00000000a80a000a | 0xa80a000a) + 0x20000c98;
  puVar5 = (uint *)(ulonglong)uVar4;
  *unaff_RSI = (int)ROUND(in_ST0);
  *(char *)((longlong)puVar5 + -0x1fffe125) = *(char *)((longlong)puVar5 + -0x1fffe125) + unaff_BL;
  *puVar5 = *puVar5 & uVar4;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + (char)*puVar5) - 0x24dffff6
                   );
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

