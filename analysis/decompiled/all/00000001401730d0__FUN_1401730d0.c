// Function: FUN_1401730d0
// Addr: 1401730d0
// Size: 256 bytes


void FUN_1401730d0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18;
  
  if ((char)param_3[1] == '\a') {
    puVar2 = (undefined8 *)*param_3;
    local_18 = 1;
    local_28 = param_1;
    local_20 = param_2;
    if (puVar2 == (undefined8 *)0x0) {
      plVar10 = (longlong *)0x0;
      plVar11 = (longlong *)0x0;
      bVar6 = false;
      bVar4 = true;
    }
    else {
      bVar6 = true;
      plVar11 = (longlong *)*puVar2;
      bVar4 = false;
      plVar10 = *(longlong **)*puVar2;
    }
    while( true ) {
      bVar5 = bVar6;
      if (!bVar4) {
        bVar5 = plVar10 != plVar11;
      }
      if (!bVar5) break;
      puVar9 = &DAT_140474480;
      if ((undefined1 *)plVar10[4] != (undefined1 *)0x0) {
        puVar9 = (undefined1 *)plVar10[4];
      }
      lVar8 = (**(code **)(*param_2 + 0x20))(param_2,puVar9);
      if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x30) & 2) == 0)) {
        (**(code **)(lVar8 + 8))(&local_28,lVar8,plVar10 + 6);
      }
      plVar3 = (longlong *)plVar10[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar10 = plVar3;
        while (cVar1 == '\0') {
          plVar10 = (longlong *)*plVar10;
          cVar1 = *(char *)(*plVar10 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar10[1] + 0x19);
        plVar7 = (longlong *)plVar10[1];
        plVar3 = plVar10;
        while ((plVar10 = plVar7, cVar1 == '\0' && (plVar3 == (longlong *)plVar10[2]))) {
          cVar1 = *(char *)(plVar10[1] + 0x19);
          plVar7 = (longlong *)plVar10[1];
          plVar3 = plVar10;
        }
      }
    }
  }
  return;
}

