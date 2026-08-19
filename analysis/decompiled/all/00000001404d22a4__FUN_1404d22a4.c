// Function: FUN_1404d22a4
// Addr: 1404d22a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d22fd) */

void FUN_1404d22a4(uint *param_1,byte *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char *in_RAX;
  char cVar5;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 & (uint)param_2;
  *(int *)((longlong)param_1 * 2) = *(int *)((longlong)param_1 * 2) + (int)&stack0x00000000;
  pcVar1 = in_RAX + (longlong)param_1;
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar5;
  bVar3 = (byte)in_RAX;
  if (SCARRY1(cVar2,cVar5)) {
    *param_2 = *param_2 ^ bVar3;
    *(char *)((longlong)param_1 + 0x3128004d) =
         *(char *)((longlong)param_1 + 0x3128004d) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)param_1 = (char)*param_1;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + bVar3;
  in_RAX[(longlong)param_1] = in_RAX[(longlong)param_1] + cVar5;
  pcVar1 = (char *)((longlong)param_1 * 2);
  cVar2 = *pcVar1;
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  *pcVar1 = *pcVar1 + cVar4;
  if (SCARRY1(cVar2,cVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)param_1 = (char)*param_1;
  *in_RAX = *in_RAX + bVar3;
  in_RAX[-0x41] = in_RAX[-0x41] + cVar5;
  *(byte *)param_1 = (char)*param_1 + bVar3;
  *(char *)param_1 = (char)*param_1 + (char)param_2;
  uRam00000001458f2bf7 = uRam00000001458f2bf7 | ((uint)in_RAX | 0x680d0003) + 0xc20400;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

