// Function: FUN_1404bfab0
// Addr: 1404bfab0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bfaef) overlaps instruction at (ram,0x0001404bfaee)
    */

void FUN_1404bfab0(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  undefined1 uVar3;
  undefined7 uVar4;
  int unaff_EBX;
  char *unaff_RSI;
  
  cVar1 = cRam1a00031a01004bf9;
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  uVar3 = (undefined1)param_1;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cRam1a00031a01004bf9);
  *pcVar2 = *pcVar2 + cRam1a00031a01004bf9;
  *(int *)(pcVar2 + 0x16) = *(int *)(pcVar2 + 0x16) + unaff_EBX;
  pcVar2[-8] = pcVar2[-8] + (char)unaff_EBX;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2 = (char *)func_0x00011891facf();
  cVar1 = (char)pcVar2 + *pcVar2;
  cRam00000001554c026d = cRam00000001554c026d + (char)unaff_EBX;
  if (-1 < cRam00000001554c026d) {
    *(char *)CONCAT71(uVar4,uVar3) = *(char *)CONCAT71(uVar4,uVar3) + param_2;
    *unaff_RSI = *unaff_RSI + param_2;
    func_0x0001b859fafa();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(uVar4,uVar3) =
       *(char *)CONCAT71(uVar4,uVar3) +
       cVar1 + (char)*(undefined4 *)CONCAT71((int7)((ulonglong)pcVar2 >> 8),cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

