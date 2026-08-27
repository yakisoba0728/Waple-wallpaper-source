// Function: FUN_1402cbcd4
// Addr: 1402cbcd4
// Size: 140 bytes


undefined8 FUN_1402cbcd4(FILE *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((longlong)&param_1->_base + 4);
  if ((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) {
    iVar5 = *(int *)&param_1->_ptr - param_1->_cnt;
    *(undefined4 *)&param_1->_base = 0;
    pcVar3 = *(char **)&param_1->_cnt;
    param_1->_ptr = pcVar3;
    if (0 < iVar5) {
      iVar4 = _fileno(param_1);
      iVar4 = FUN_1402df7d0(iVar4,pcVar3,iVar5,param_2);
      if (iVar5 != iVar4) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) != 0) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_1->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}

