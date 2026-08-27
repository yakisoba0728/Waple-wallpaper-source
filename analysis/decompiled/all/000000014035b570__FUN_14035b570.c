// Function: FUN_14035b570
// Addr: 14035b570
// Size: 263 bytes


longlong FUN_14035b570(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res18 [2];
  longlong *plVar5;
  undefined4 uVar6;
  
  lVar3 = FUN_1403f70d0();
  if (lVar3 != 0) {
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    plVar5 = local_res18;
    iVar2 = FUN_1402f24e0(lVar3,*(undefined8 *)(param_1 + 4),param_1[6],param_2,plVar5);
    lVar4 = local_res18[0];
    uVar6 = (undefined4)((ulonglong)plVar5 >> 0x20);
    if (iVar2 == 0) {
      FUN_1402f42f0(local_res18[0]);
      lVar4 = FUN_140416910(lVar4,&LAB_14039d530);
      FUN_1402efa80(local_res18[0]);
      *(longlong *)(local_res18[0] + 0x48) = lVar3;
      *(undefined1 **)(local_res18[0] + 0x50) = &LAB_1403c03d0;
      if (*(char *)(lVar4 + 4) != '\0') {
        if (*param_1 != 0) {
          LOCK();
          *param_1 = *param_1 + 1;
          UNLOCK();
        }
        cVar1 = FUN_14038a850(lVar4,&DAT_1404e51e9,param_1,FUN_14039a930,CONCAT44(uVar6,1));
        if (cVar1 != '\0') {
          return lVar4;
        }
        FUN_140414150(param_1);
        FUN_140415810(lVar4);
      }
    }
  }
  return 0;
}

