// Function: FUN_1404d22b4
// Addr: 1404d22b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d22fd) */

void FUN_1404d22b4(char *param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char *in_RAX;
  char cVar5;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1;
  cVar3 = (char)in_RAX;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + cVar3;
  in_RAX[(longlong)param_1] = in_RAX[(longlong)param_1] + cVar5;
  pcVar2 = (char *)((longlong)param_1 * 2);
  cVar1 = *pcVar2;
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  *pcVar2 = *pcVar2 + cVar4;
  if (!SCARRY1(cVar1,cVar4)) {
    *param_1 = *param_1;
    *in_RAX = *in_RAX + cVar3;
    in_RAX[-0x41] = in_RAX[-0x41] + cVar5;
    *param_1 = *param_1 + cVar3;
    *param_1 = *param_1 + (char)param_2;
    uRam00000001458f2bf7 = uRam00000001458f2bf7 | ((uint)in_RAX | 0x680d0003) + 0xc20400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

