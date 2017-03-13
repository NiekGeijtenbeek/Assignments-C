.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment3_5 - Release ]----------"
	@cd "Assignment3_5" && "$(MAKE)" -f  "Assignment3_5.mk"
clean:
	@echo "----------Cleaning project:[ Assignment3_5 - Release ]----------"
	@cd "Assignment3_5" && "$(MAKE)" -f  "Assignment3_5.mk" clean
